#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#pragma warning(disable:4996)
#define AE (unsigned char) 142
#define ae (unsigned char) 132 //0x84
#define OE (unsigned char) 153
#define oe (unsigned char) 148
#define UE (unsigned char) 154
#define ue (unsigned char) 129
#define ss (unsigned char) 225

#define PI 3.1415926535898  // Pi als Präprozessordirektive
const double  pi = 3.1415926535898; // als globale, konstante Variable

void aufgabe1_Gr1() {

	float a = 2.5; // funktioniert so, aber nicht schön. konvertiert komma zahl zu ganzer zahl(sicherlich nicht so beabsichtigt) a=2
	int b = '&'; // ASCII Zeichen & als Dezimal abgespeichert( &=38
	char c = '\\'; // c=92, ASCI Zeichen Backslash(doppelt da sonst escape sequenz)
	short z = 500; //char Werte bereich geht nicht bis 500 => größerer Datentyp
	long count = 0; // in Ordnung
	int big = 33333; // short Werte bereich zu klein => nächst größeren Datentyp nehmen
	signed char ch = '\205';
	signed int size = -40000; // Vorzeichenbehaftet, dürfte bei UNsigned nicht negativ werden
	double first_value = 1.23E+5; //darf nicht mit leerzeichen getrennt werden. 
	double fläche = 99999999.99; // meckert nicht aber genauigkeit nur auf 7 stellen 
	printf("a=%f \nb=%c \nc=%c \nz=%d \ncount=%d \nbig=%d \n", a, b, c, z, count, big);
	printf("ch=%d \nsize=%d \nfirst_value=%f \nfl\x84 \bche=%f\n", ch, size, first_value, fläche);

}

void aufgabe2_Gr1() {
	float zahl1 = 4;
	float zahl2 = 12.25;
	float zahl3 = 0.01234;
	printf("ZAHL\t\t\tWURZEL\n"); // Tabellen Überschrift
	printf("%f\t\t%f\n", zahl1, sqrt(zahl1));
	printf("%f\t\t%f\n", zahl2, sqrt(zahl2));
	printf("%f\t\t%f\n", zahl3, sqrt(zahl3));
}

void aufgabe2_Gr3() {

	printf("Basis\t\tExponent\t\tErgebnis\n");
	printf("%0.5f\t\t%0.5f\t\t\t%0.5f\n", 2.0, 4.0, pow(2, 4));
	printf("%0.5f\t\t%0.5f\t\t\t%0.5f\n", 8.0, 3.5, pow(8, 3.5));
	printf("%0.5f\t%0.5f\t\t\t%0.5f\n", 16.0, 5.25, pow(16, 5.25));

}

void aufgabe3_Gr1_Kugel() {
	float radius = 0;
	float oberfläche = 0;
	float volumen = 0;

	printf("Kugelberechnung\n\n");
	printf("Bitte geben Sie einen Radius ein:\t");
	scanf("%f", &radius);
	volumen = pi * pow(radius, 3) * (4.0 / 3.0); //Mathematik
	oberfläche = 4 * PI * radius * radius;
	printf("Radius\t\t%0.2f\n"
		"Oberfl%cche\t%0.2f\n"
		"Volumen\t\t%0.2f\n", radius, ae, oberfläche, volumen);
}

void aufgabe3_Volumen_Quader() {

	float laenge = 0;
	float breite = 0;
	float hoehe = 0;
	float Volumen = 0;
	float Oberflaeche = 0;


	printf("Geben Sie die L%cnge ein:\t", ae);
	scanf("%f", &laenge);
	printf("\nGeben Sie die Breite ein:\t");
	scanf_s("%f", &breite);
	printf("\nGeben Sie die H%che ein:   \t", oe);
	scanf_s("%f", &hoehe);

	system("cls");  //lösche bildschirm

	printf("L\x84nge\t\tBreite\t\tH%che\t\tVolumen\t\tOberfl%cche\n\n\n", oe, ae);
	Oberflaeche = 2 * ((laenge*breite) + (laenge*hoehe) + (breite*hoehe)); //Mathematik!
	Volumen = laenge*breite*hoehe;
	printf("%f\t%f\t\%f\t%f\t%f\n\n", laenge, breite, hoehe, Volumen, Oberflaeche);

}

void aufgabe4_Gr1() {

	char eingabe = 0;
	printf("Bitte geben Sie einen gro%cen Buchstaben ein!\t", ss);
	scanf("%c", &eingabe);
	printf("kleiner Buchstabe = %c\n", eingabe + 32);
}


int main() {
	//aufgabe1_Gr1();
	//aufgabe2_Gr1();
	//aufgabe2_Gr3();
	//aufgabe3_Gr1_Kugel();
	//aufgabe3_Volumen_Quader();
	aufgabe4_Gr1();

	system("pause");
}