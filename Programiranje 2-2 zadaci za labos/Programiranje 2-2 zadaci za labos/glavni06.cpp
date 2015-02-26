#include <stdio.h>
#include "funkcije06.h"
int main6(void){
	char tekst[1024];
	int i;
	gets_s(tekst);
	printf("Broj rijeci u zadanom tekstu: ");
	printf("%d ", brRijeci(&tekst[0]));
	printf("\nPromijenjen tekst:\n");
	izbaciBrojeve(&tekst[0]);
	puts(tekst);
	printf("Broj rijeci poslije promjene: ");
	printf("%d", brRijeci(&tekst[0]));
	printf("\n");
	scanf_s("\n");
	return 0;
}