#include<stdio.h>
#include"funkcije08.h"
int main9(void){
	int brLijevih=0, brDesnih=0;
	char niz[201], lijevi, desni;
	printf("Upisite izraz koji zelite provjeriti: ");
	gets_s(niz);
	do{
		printf("Upisite lijevi i desni granicnik:");
		scanf_s("%c", &lijevi);
		scanf_s("%c", &desni);
		if (izrazJeIspravan(niz, brLijevih, brDesnih) == 1){
			printf("Izraz");
			puts(niz);
			printf("JE ispravan obzirom na granicnike %c %c", lijevi, desni);
		}
		else {
			printf("Izraz");
			puts(niz);
			printf("NIJE ispravan obzirom na granicnike %c %c", lijevi, desni);
		}
	} while ((lijevi != '\\'));
	scanf_s("%d");
	return 0;

}