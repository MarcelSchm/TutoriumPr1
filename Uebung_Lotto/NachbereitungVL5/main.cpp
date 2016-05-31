#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#pragma warning (disable:4996)  // beschissene scanf warnung aus
#define ue 129

void aufgabe1() {

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			printf("%d * %d = %d\n", i, j, i*j);
		}
	}

}
void aufgabe2() {
	int abfrage = 0; //vom Benutzer festzulegen
	int zaehler = 0; // zählt die anzahl der primzahlen
	int aktuelleZahl = 1; //aktuelle zu prüfende Zahl
	int divisor = 2; // Zahl mit der geprüft wird, ob von zwei bis aktuelle zahl teilbar
	bool primzahl = true;
	printf("wieviele Primzahlen wollen Sie haben?  ");
	scanf("%d", &abfrage);
	printf("\n");
	while (zaehler<abfrage) { // bis genügend primzahlen gefunden wurden
		primzahl = true;
		divisor = 2;
		while (divisor < aktuelleZahl) { // von 2 bis aktuelle zahl teilen, wenn nicht teilbar dann primzahl

			if (aktuelleZahl%divisor == 0) {
				primzahl = false;
			}
			divisor++; //nächster divisor, bis aktuelle zahl erreicht
		}
		if (true == primzahl) {
			printf("%d ", aktuelleZahl);
			zaehler++;
		}

		aktuelleZahl++; //nächste Zahl
	}
}
void aufgabe3() {
	unsigned int eingabe = 0;
	printf("+++++++MEN%c+++++++\n", ue);
	printf("1: Aufgabe1\n");
	printf("2: Aufgabe2\n");
	printf("3: Aufgabe3\n");
	do{
	printf("\nGeben Sie Ihre Auswahl ein :  ");
	scanf("%d", &eingabe);
	
	switch (eingabe) {
	case 1: aufgabe1();
		break;
	case 2: aufgabe2();
		break;
	case 3: aufgabe3();
		break;
	default: printf("keine g%cltige Eingabe! Nochmal...\n\n", ue);
		assert(eingabe == 5);
		break;
	}
	} while (!(eingabe > 0 && eingabe < 4));
}

int main() {
	
	//aufgabe1();
	//aufgabe2();
	aufgabe3();

	system("pause");
	return 0;
}