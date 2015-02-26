#include <stdio.h>
#include "funkcije05.h"
int main45(void){
	int i=0, j=0, l=0;
	char niz1[200], niz2[200];
	gets_s(niz1);
	while (niz1[i] != '\0'){
		l++;
		i++;
	}
	j= brojRecenica(&niz1[0], l);
	printf("%d", j);

	



	scanf_s("\n");

	return 0;
}