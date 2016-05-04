/*
* File:   main.c
* Author: Marcel S Timo G
*
* Created on 14. Dezember 2013, 16:06
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


#pragma warning (disable:4996)  // beschissene scanf warnung aus

#define maxh 15
#define maxv 30

void ausgabe(int spielfeld[][maxv], int generation); //deklaration der Funktion damit sie im vorhinein bekannt ist

void Startbildschirm() {
	while (!kbhit(1)) //Überprüft ob eine Eingabe gemacht wurde.
	{
		printf("\t  ******        **      ***       ***  ***********\n"
			"\t**********     ****     *****   *****  ***********\n"
			"\t**            ******    *************  **\n"
			"\t**    ****   ***  ***   **  *****  **  **\n"
			"\t**    ****   ***  ***   **  *****  **  **********  \n"
			"\t**      **  **********  **  *****  **  **\n"
			"\t**      **  **********  **  *****  **  **\n"
			"\t**********  **      **  **  *****  **  ***********\n"
			"\t  *******   **      **  **  *****  **  *********** \n\n\n");
		Sleep(1000);
		system("cls");

		printf("\t              ******    *************\n"
			"\t            **********  *************\n"
			"\t            ****  ****  ***\n"
			"\t            ***    ***  ************\n"
			"\t            ****  ****  **\n"
			"\t            **********  **\n"
			"\t              ******    **\n");

		Sleep(1000);
		system("cls");

		printf("\t**           **  ************  *************\n"
			"\t**           **  ************  *************\n"
			"\t**           **  **            **\n"
			"\t**           **  ********      ************\n"
			"\t**           **  ********      **\n"
			"\t***********  **  **            *************\n"
			"\t***********  **  **            **************\n");

		Sleep(1000);
		system("cls");
	};


};

void Ausgangsmuster(int spielfeld[][maxv]) {


	int x = 0, y = 0;


	while (!(x >= maxh || y >= maxv || x < 0 || y < 0)) {
		printf("\n\nKoordinaten der Startviren eingeben\nvon 0 0 bis %i %i (Ende mit -1 -1) :   ", maxh - 1, maxv - 1);
		scanf("%i %i", &x, &y);
		spielfeld[x][y] = 1;
		system("cls"); //löschen und cursor nach oben links
		ausgabe(spielfeld, 0);


	}
	system("cls");
};

void ausgabe(int spielfeld[][maxv], int generation) {
	int v, w;
	printf("Generation %i \n\n", generation);
	for (v = 0; v < maxh; v++) {
		for (w = 0; w < maxv; w++) {
			if (spielfeld[v][w] == 1) printf("%c", 254);
			else printf("%c", 32);
		}
		printf("\n");
	};
	printf("\n\n");
};

void lebenszyklus(int spielfeld[][maxv], int *generation) {
	int v = 0, w = 0;
	int Nachbarn = 0;
	int zwischenspeicher[maxh][maxv] = { 0 };

	for (v = 0; v < maxh; v++) {
		for (w = 0; w < maxv; w++) {


			Nachbarn = spielfeld[(v - 1 + maxh) % maxh][(w - 1 + maxv) % maxv]
				+ spielfeld[(v - 1 + maxh) % maxh][w]
				+ spielfeld[(v - 1 + maxh) % maxh][(w + 1 + maxv) % maxv]
				+ spielfeld[v][(w - 1 + maxv) % maxv]
				+ spielfeld[v][(w + 1 + maxv) % maxv]
				+ spielfeld[(v + 1 + maxh) % maxh][(w - 1 + maxv) % maxv]
				+ spielfeld[(v + 1 + maxh) % maxh][w]
				+ spielfeld[(v + 1 + maxh) % maxh][(w + 1 + maxv) % maxv];

			if (spielfeld[v][w] == 1) { //spielregeln block
				if (Nachbarn == 2 || Nachbarn == 3) zwischenspeicher[v][w] = 1;
				else zwischenspeicher[v][w] = 0;
			}
			else {
				if (Nachbarn == 3) zwischenspeicher[v][w] = 1;
				else zwischenspeicher[v][w] = 0;
			}
		}
	}
	for (v = 0; v < maxh; v++) {
		for (w = 0; w < maxv; w++) {
			spielfeld[v][w] = zwischenspeicher[v][w];
		}
	}
	*generation = *generation + 1;
}

int main(int argc, char *argv[]) {
	int v = 0, w = 0, i = 0;
	int spielfeld[maxh][maxv] = { 0 };
	int generation = 0;
	int laufzeit;
	int ausgeloescht = 0;

	system("color F0");
	Startbildschirm();
	printf("/////////////////////////GAME OF LIFE/////////////////////////\n\n");
	printf("******Wie viele Generationen sollen durchgerechnet werden?******");
	scanf("%i", &laufzeit);
	fflush(stdin);

	Ausgangsmuster(spielfeld);
	system("cls");
	for (i = 0; i < laufzeit + 1 && !kbhit(1); i++) {
		lebenszyklus(spielfeld, &generation);
		ausgabe(spielfeld, generation);
		Sleep(100);
		for (v = 0; v < maxh; v++) {
			for (w = 0; w < maxv; w++) {
				ausgeloescht = ausgeloescht + spielfeld[v][w]; //Gesamtzahl lebender Zellen
			}
		}
		if (ausgeloescht == 0) {
			system("cls");
			printf("\n\nIhre Virenkolonie hat sich nach %i Generationen ausgeloescht!\n\n", generation);
			break;
		}

		system("cls");
	}








	return (0);
}










