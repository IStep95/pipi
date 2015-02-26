#include "funkcije04.h"
#include <stdio.h>
void generirajNiz(char *znakovi, int duljinaNiza, char *genNiz){
	int i=0, j, duljina = 0, brojac=0;
	char tmp[20];
	for (i = 0; *(znakovi + i) != '\0'; i++){
		duljina++;
	}
	if (duljinaNiza <= duljina){
		for (i = duljina - duljinaNiza; *(znakovi + i) != '\0'; i++){
			*(genNiz + brojac) = *(znakovi + i);
			brojac++;
		}
		*(genNiz + brojac) = '\0';
	}
	else {
		for (i = 0; i < duljina; i++){
			*(genNiz + i) = *(znakovi + i);
		}
		for (i = duljina; i < duljinaNiza; i++){
			*(genNiz + i) = *(znakovi + i - duljina);
		}
		*(genNiz + duljinaNiza) = '\0';
	}



}
int dobarNiz(char *niz, int duljinaNiza){
	int i, j;
	char f[20]{0};
	for (i = 0; i < duljinaNiza; i++){
		f[i] = * (niz + i);
	}
	for (i = 0; i < duljinaNiza; i++){
		for (j = i+1; j < duljinaNiza; j++){
			if (f[i] == f[j]){
				return 0;
			}
		}
	}
	return 1;
}