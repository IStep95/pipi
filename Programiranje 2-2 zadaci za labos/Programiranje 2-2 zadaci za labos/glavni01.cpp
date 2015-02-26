#include<stdio.h>
#include "funkcije01.h"
#include<math.h>
int main5(void){
	int a, b, i, j;
	int broj_gradova, postanski[100];
	double x,y, lat[100], lng[100];
	printf("Ucitaj broj gradova ne manji od 3 i ne veci od 100. \n");
	do{
		scanf_s("%d", &broj_gradova);
	} while (broj_gradova < 3 || broj_gradova > 100);
	printf("Ucitaj postanski broj za svaki od gradova i GPS koordinate grada. \n");
	for (i = 0; i < broj_gradova; i++){
		printf("%d. grad", i + 1);
		scanf_s("%d", &postanski[i]);
		scanf_s("%lf", &lat[i]);
		scanf_s("%lf", &lng[i]);
		lat[i] = stupnjeviURadijane(lat[i]);
		lng[i] = stupnjeviURadijane(lng[i]);
		printf("\n");
		
	}
	printf("Medjusobne udaljenosti gradova:");
	for (i = 0; i < broj_gradova; i++){
		for (j = 0; j < broj_gradova; j++){
			if (i > j){
				printf("%d - %d %.3f km\n", postanski[j], postanski[i], izracunajUdaljenost(lat[j], lat[i], lng[j], lng[i]));
			}
		}
	}



	scanf_s("%d");
	return 0;
}