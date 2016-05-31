#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable:4996)  // beschissene scanf warnung aus


long binom(long n, long k) {
	long ergebnis = 0;
	if (0 == k) {
		return 1;
	}
	if (n == k) {
		return 1;
	}
	ergebnis=binom(n - 1, k - 1) + binom(n - 1, k);
	return ergebnis;
}
int main() {


	printf("%ld\n",binom(5, 0));
	printf("%ld\n", binom(5, 3));





	system("pause");
	return 0;
}









