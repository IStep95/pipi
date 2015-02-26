#include <stdio.h>
#include "funkcije07.h"
int main07(void){
	int kljuc;
	char niz1[101], niz2[101]{0};
	do{
		printf("Upisi niz: \n");
		gets_s(niz1);
	} while (brojNeSlova(&niz1[0]) != 0);
	do{
		printf("Ucitaj kljuc enkripcije broj izmedu 1 i 25\n");
		scanf_s("%d", &kljuc);
	} while (kljuc < 1 || kljuc > 25);
	caesarEncrypt(&niz1[0], &niz2[0], kljuc);
	puts(niz2);
	scanf_s("%d");
	return 0;
}