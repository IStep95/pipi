#include "funkcije08.h"
#include <string.h>
#include <stdio.h>
void brojacGranicnihZnakova(char *znNiz, char lijevi, char desni, int *brLijevih, int *brDesnih){
	int i, l;
	l = strlen(znNiz);
	for (i = 0; i < l; i++){
		if (*(znNiz + i) == lijevi){
			*brLijevih++;
	}
		if (*(znNiz + i) == desni){
			*brDesnih++;
		}
	}
}
int izrazJeIspravan(char *znNiz, char lijevi, char desni){
	int i, l, n, brLijevih= 0, brDesnih= 0;
	l = strlen(znNiz);
	brojacGranicnihZnakova(&znNiz[0], lijevi, desni, &brLijevih, &brDesnih);
	if (brLijevih == brDesnih){
		
		return 1;
	}
	return 0;	






	
}