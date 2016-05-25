#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable:4996)  // beschissene scanf warnung aus

double getDouble(char* text) {
	double zahl = 0;
	printf(text);
	printf("\t");//damit die Zahl nicht direkt hinterm text eingelesen wird
	scanf("%lf", &zahl);
	printf("\n");//neue Zeile für nächste abfrage
	return zahl;

}

void getVect(char* text, double* vektor) {
	printf(text);
	printf("\n\n");
	vektor[0] = getDouble("Gib x-Koordinate ein");
	vektor[1] = getDouble("Gib y-Koordinate ein");
	vektor[2] = getDouble("Gib z-Koordinate ein");
}

void printVect(char* text, double vektor[]) {
	printf(text);
	printf("\n");
	printf("|\t%f\t|\n"
	 	   "|\t%f\t|\n"
	       "|\t%f\t|\n", vektor[0], vektor[1], vektor[2]);
	printf("\n");



}

void summeBerechnen(double vektora[], double vektorb[],double ergebnisvektor[]) {
	ergebnisvektor[0] = vektora[0] + vektorb[0];
	ergebnisvektor[1] = vektora[1] + vektorb[1];
	ergebnisvektor[2] = vektora[2] + vektorb[2];
}

void differenzBerechnen(double vektora[], double vektorb[], double ergebnisvektor[]) {
	ergebnisvektor[0] = vektora[0] - vektorb[0];
	ergebnisvektor[1] = vektora[1] - vektorb[1];
	ergebnisvektor[2] = vektora[2] - vektorb[2];
}

void kreuzproduktBerechnen(double vektora[], double vektorb[], double ergebnisvektor[]) {
	ergebnisvektor[0] = (vektora[1] * vektorb[2]) - (vektora[2] * vektorb[1]);
	ergebnisvektor[1] = (vektora[2] * vektorb[0]) - (vektora[0] * vektorb[2]);
	ergebnisvektor[2] = (vektora[0] * vektorb[1]) - (vektora[1] * vektorb[0]);
}

double skalarBerechnen(double vektora[], double vektorb[]) {
	return (vektora[0] * vektorb[0]) + (vektora[1] * vektorb[1]) + (vektora[2] * vektorb[2]);
}

int main() {
	//++++++++++Aufgabe1++++++++++++++++++++
	double vektorA[3] = { 0 };
	double vektorB[3] = { 0 };
	double summe[3] = { 0 };
	double differenz[3] = { 0 };
	double kreuzprodukt[3] = { 0 };
	double skalarprodukt = 0;
	//++++++++++++++++++++++++++++++++++++++


	printf("Vektorberechnung\n");

	getVect("Abfrage Vektor A:", vektorA);
	getVect("Abfrage Vektor B:", vektorB);

	summeBerechnen(vektorA, vektorB, summe);
	printVect("Summe der Vektoren: ", summe);

	differenzBerechnen(vektorA, vektorB,differenz);
	printVect("differenz der Vektoren: ", differenz);

	skalarprodukt=skalarBerechnen(vektorA, vektorB);
	printf("Das Skalarprodukt ist:\t%f\n", skalarprodukt);

	kreuzproduktBerechnen(vektorA, vektorB, kreuzprodukt);
	printVect("Kreuzprodukt der Vektoren: ", kreuzprodukt);

	printf("Ich habe fertig\n\n");

	system("pause");
	return 0;
}
