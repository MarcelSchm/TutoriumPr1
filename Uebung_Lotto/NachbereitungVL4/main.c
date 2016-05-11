
#include <stdio.h>
#include <stdlib.h>

void aufgabe2() {
	int x = 3, y = 7, z;
	z = y-- - x;
	printf("x=%d y=%d z=%d\n", x, y, z);
}
void InBinaer(int x) {
	__int16 zahl = 0;// spezieller Datentyp, integer hat nur 16 bit (um prinzip zu zeigen sonst wird es unübersichtlich)
	//unterscheidung ob positiv oder negativ. bei positiv normal rechnen, bei negativ invertieren und das ergebnis
	//auch wieder invertieren
	if (x < 0) {
		 zahl = ~x;
	}
	else  zahl = x;

	int array[16] = { 0 }; //zwischenspeicher der zahlen da von unten nach oben lesen
	for (int i = 0; i < 16; i++) {  //Umrechnung in binär
		array[i] = zahl % 2; // Mit Modulo gucken ob glatt teilbar oder rest...diesen ausgeben (sozusagen das letzte bit betrachten)
		zahl = zahl >> 1; //alles um eins nach rechts schieben

	}
	for (int j = 15; j >= 0; j--) {
		if (x < 0) {  //Bei negativen Zahlen muss ausgabe invertiert werden
			if (1==array[j]) { //wenn 1 dann invertieren...
				printf("%d", 0);
			}
			else printf("%d", 1);// wenn null dann mach 1 draus
		}
		else printf("%d", array[j]);// bei normalen zahlen einfach array ausgeben
	}
	printf("\n");
}

void aufgabe3() {

	int z, a = 2, b = 42, c = 13;
	z = a == (b = c);
	printf(" z=%d a=%d b=%d c=%d \n", z, a, b, c);
	z = a == (b = 2);
	printf(" z=%d a=%d b=%d c=%d \n", z, a, b, c);

}
void aufgabe4() {
	__int8 x = -5;
	__int8 y = ~(x);
	x = x << 2;
	InBinaer(x);
	
}


void aufgabe5() {
	int x = 0;
	int zaehler = 1;
	x = 4; // auf 4 setzen (4 als beispielzahl)


	x += 2;
	printf("%d. Gleichung:    %d\n", zaehler, x);

	x = 4; // auf 4 zurücksetzen
	zaehler++; //zaehler um eins erhöhen
	x *= 3;
	printf("%d. Gleichung:    %d\n", zaehler, x);

	zaehler++; //zaehler um eins erhöhen
	x = 4; // auf 4 zurücksetzen
	x *= -1;
	printf("%d. Gleichung:    %d\n", zaehler, x);

	zaehler++; //zaehler um eins erhöhen
	x = 4; // auf 4 zurücksetzen
	x <<= 2;
	printf("%d. Gleichung:    %d\n", zaehler, x);

	zaehler++; //zaehler um eins erhöhen
	x = 4; // auf 4 zurücksetzen
	x &= 2;
	printf("%d. Gleichung:    %d\n", zaehler, x);

	zaehler++; //zaehler um eins erhöhen
	x = 4; // auf 4 zurücksetzen
	x %= 2;
	printf("%d. Gleichung:    %d\n", zaehler, x);

	zaehler++; //zaehler um eins erhöhen
	x = 4; // auf 4 zurücksetzen
	x &= 2 << 7;
	printf("%d. Gleichung:    %d\n", zaehler, x);

	zaehler++; //zaehler um eins erhöhen
	x = 4; // auf 4 zurücksetzen
	x &= ~(2 << 7);
	printf("%d. Gleichung:    %d\n", zaehler, x);

	zaehler++; //zaehler um eins erhöhen
	x = 4; // auf 4 zurücksetzen
	x |= 2 << 7;
	printf("%d. Gleichung:    %d\n", zaehler, x);

	zaehler++; //zaehler um eins erhöhen
	x = 4; // auf 4 zurücksetzen
	x |= ~(2 << 7);
	printf("%d. Gleichung:    %d\n", zaehler, x);

		


}
float wurzel(float quadrat, float Stellengenauigkeit) {
	int x0 = 1;
	float folge = 0;
	folge = 0.5*(x0 + quadrat / x0);
	double abweichung=10;
	for (int i = 1; i<Stellengenauigkeit; i++) {
		abweichung = abweichung * 10;
	}
	while (((folge*folge) - quadrat) > (1/abweichung)) {  // 7 Stellen genau => 10^-7 10^7 vorher berechnet, danach kehrwert
		folge = 0.5*(folge + quadrat / folge);
	}
 return folge;

}

int main() {

	//aufgabe2();
	//aufgabe3();
	//aufgabe4();
	//aufgabe5();
	wurzel(4, 2);
	printf("Wurzel von 4 ist:  %f", wurzel(5, 7));
	system("pause");
	return 0;
}
















