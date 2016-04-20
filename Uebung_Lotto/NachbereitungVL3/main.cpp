
#include <stdio.h>
#include <stdlib.h>


void aufgabe7() {

	int a = 4711;
	int * zeiger = NULL;
	int b = 2014;
	printf(" Werte    :   a = %d,   zeiger  = %d,  b = %d \n", a, zeiger, b);
	printf(" Adressen :  &a = %d, & zeiger  = %d, &b = %d \n\n", &a, &zeiger, &b);
	zeiger = &a; // zeiger hat jetzt die Adresse von a gespeichert
	printf(" Werte    :   a = %d,   zeiger  = %d,  b = %d \n", a, zeiger, b);
	printf(" Adressen :  &a = %d, & zeiger  = %d, &b = %d \n\n", &a, &zeiger, &b);
	b = *zeiger + 300; // * zeiger holt den Wert von der Adresse ab , also
					   // den Inhalt von a
	printf(" Werte    :   a = %d,   zeiger  = %d,  b = %d \n", a, zeiger, b);
	printf(" Adressen :  &a = %d, & zeiger  = %d, &b = %d \n\n", &a, &zeiger, &b);
	*zeiger = 42; // Jetzt wird in die Speicherstelle geschrieben ,
				  // d.h. a aendert den Wert
	printf(" Werte    :   a = %d,   zeiger  = %d,  b = %d \n", a, zeiger, b);
	printf(" Adressen :  &a = %d, & zeiger  = %d, &b = %d \n\n", &a, &zeiger, &b);
	*zeiger = 2 * * zeiger; // Was macht das ?
	printf(" Werte    :   a = %d,   zeiger  = %d,  b = %d \n", a, zeiger, b);
	printf(" Adressen :  &a = %d, & zeiger  = %d, &b = %d \n\n", &a, &zeiger, &b);


}

void aufgabe8() {
	int a = 4711;
	int b[3] = { 3, 5, 7 };
	int c = 2014;
	int i;
	for (i = -10; i <15; i++) /* HOPPLA */
		printf("b[%d] = %d\n", i, b[i]);
	printf(" a = %d, c = %d\n", a, c);

}

void aufgabe9() {
	unsigned int array[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		array[i] = (i + 1)*(i + 1);
		printf("%d * %d   = %d\n", i + 1, i + 1, array[i]);
	}


}

void schleife() {
	float i = 0.0;
	for (i = 0.0; i != 1.0; i += 0.1)
		printf("%f", i);
}

void aufgabe10() {
	 int array[100] = { 1,1 };
	for (int i = 2; i < 100; i++) {
		array[i] = array[i - 1] + array[i - 2];
		printf("Fib(%d) = %d\n", i-2, array[i-2]);
	}
	printf("Fib(99) = %d\n",array[98]);
	printf("Fib(100) = %d\n",array[99]);
}

int main(void) {


	//aufgabe7();
	//aufgabe8();
	//aufgabe9();
	aufgabe10();
	//schleife();
	system("pause");
	return 0;
}























