#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "funkcije09.h"
#include <stdio.h>
#include <string.h>

int main(void){
	int i, l1, l2, duljina, broji1=0, broji2=0, sadrzi=0;
	float omjer;
	char niz1[301], niz2[301], podniz[301] = {'\0'};
		printf("Ucitaj prvi niz:\n");
	gets(niz1);
		printf("Ucitaj drugi niz:\n");
	gets(niz2);
	l1 = strlen(niz1);
	l2 = strlen(niz2);

	do{
		printf("Ucitaj duljinuPodniza:\n");
		scanf("%d", &duljina);

	} while ((duljina < 2 || duljina > 5) || duljina > l1 || duljina > l2);
	
	for (i = 0; i < l1; i++){
		genPodniz(&niz1[0], &podniz[0], i, duljina);
		sadrzi = sadrziPodniz(&niz2[0], &podniz[0]);
		broji1 += sadrzi;
	}
	sadrzi = 0;
	for (i = 0; i < l2; i++){
		genPodniz(&niz2[0], &podniz[0], i, duljina);
		sadrzi = sadrziPodniz(&niz1[0], &podniz[0]);
		broji2 += sadrzi;
	}
	printf("%d\n", broji1);
	printf("%d\n", broji2);


















	scanf("\n");
	return 0;
}