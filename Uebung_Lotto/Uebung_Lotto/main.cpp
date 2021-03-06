#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <stdbool.h> // damit bool nutzbar ist

#pragma warning (disable:4996)  // beschissene scanf warnung aus
#define ue 129
bool check(int a[], int x) {

	for (int i = 0; i < 6; i++) {
		if (x == a[i]) {
			return true;
		}
	}
	return false;
}

void initArray(int a[]) {
	srand(time(NULL)); // zufallszahlen brauchen eine berechnungsgrundlage. hier wird die zeit zum Zeitpunkt null als quelle(seed) genommen 
	int zufall = 0;
	for (int i = 0; i < 6; i++) {

		zufall= rand() % 49 + 1;//Zufallszahl zwischen 0 und 48+1
		while (check(a,zufall)){//solange ein array element gleich der zufallszahl ist(=true) , neue zahl
			zufall= rand() % 49 + 1; //Zufallszahl zwischen 0 und 48+1
	}

		a[i] = zufall; 
		}
	

	
}

void show(int a[]) {
	for (int i = 0; i < 6; i++) {
		printf("a[%d]=  %d\n", i, a[i]);
	}
}

int treffer(int a[], int tippschein[]) {
	int richtige = 0;
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			if (tippschein[i] == a[j]) {
				richtige++;
			}
		}

	}
	return richtige;


}

int main() {
	int ziehung[6] = { 0 };
	int tippschein[6] = { 0 };
	printf("Geben sie Ihre Tipps ein:\n");

	//in dieser schleife könnte man noch implementieren, dass keine doppelten Tipps eingetragen werden
	// bis jetzt wird auf die gutmütigkkeit des Benutzers vertraut
	for (int i = 0; i < 6; i++) {
		printf("\nTipp Nr.%d:\t", i);
		scanf("%d", &tippschein[i]);
		fflush(stdin); //puffer leeren damit nicht zufällig zwei werte doppelt gelesen werden 

	}

	printf("\n\nDie Eingabe ist vollendet. Die Lottozahlen sind: \n");
	initArray(ziehung); //Hier werden die zufälligen Lottozahlen bestimmt
	show(ziehung); // Ausgabe in der Konsole der Lottozahlen

	printf("\nHerzlichen Gl%cckwunsch! Sie haben %d Richtige!\n",ue, treffer(ziehung, tippschein)); //Gewinnausschüttung


	system("pause");
	return 0;
}
















