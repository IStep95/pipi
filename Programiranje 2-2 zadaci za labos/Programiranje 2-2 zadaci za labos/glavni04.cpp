#include<stdio.h>
#include "funkcije04.h"
#include<string.h>
int main4(void){
	int i, duljinaNiza, x;
	char znakovi[21];
	char genNiz[100];
	do{
		gets_s(znakovi);
		x = dobarNiz(&znakovi[0], strlen(znakovi));
	} while (x == 0);
	do{
		scanf_s("%d", &duljinaNiza);
	} while (duljinaNiza > 100);
	generirajNiz(&znakovi[0], duljinaNiza, &genNiz[0]);

	for (i = 0; genNiz[i] != '\0'; i++){
		printf("%c", genNiz[i]);
	}










	scanf_s("\n");
	return 0;
}