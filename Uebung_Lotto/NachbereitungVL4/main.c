
#include <stdio.h>
#include <stdlib.h>


void aufgabe2() {
	int x = 3, y = 7, z;
	z = y-- - x;
	printf("x=%d y=%d z=%d\n", x, y, z);
}

void aufgabe3() {

	int z, a = 2, b = 42, c = 13;
	z = a == (b = c);
	printf(" z=%d a=%d b=%d c=%d \n", z, a, b, c);
	z = a == (b = 2);
	printf(" z=%d a=%d b=%d c=%d \n", z, a, b, c);

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

int main() {

	//aufgabe2();
	//aufgabe3();
	aufgabe5();


	system("pause");
	return 0;
}
















