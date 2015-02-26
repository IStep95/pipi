#include<stdio.h>
#include "funkcije03.h"

int main2(void){
	int skup1[20];
	int skup2[20];
	int unijapov[40];
	int nunija;
	int i=0, tmp, postoji=0, S1N=0;
	int tmp2, postoji2 = 0, S2N = 0;
	printf("Unesi elemente 1.skupa. \n");
	do{
		scanf_s("%d", &tmp);
		if (tmp > 0){
			postoji = 0;
			for (i = 0; i < S1N; i++){
				if (skup1[i] == tmp){
					postoji = 1;
					break;
				}
			}
			if (postoji == 0){
				skup1[S1N] = tmp;
				S1N++;
			}
		}
	} while (tmp > 0 && S1N < 20);
	printf("Unesi elemente 2.skupa. \n");
	do{
		scanf_s("%d", &tmp2);
		if (tmp2 > 0){
			postoji2 = 0;
			for (i = 0; i < S2N; i++){
				if (skup2[i] == tmp2){
					postoji2 = 1;
					break;
				}
			}
		
			if (postoji2 == 0){
				skup2[S2N] = tmp2;
				S2N++;
			}
		}
	} while (tmp2 > 0 && S2N < 20);

	printf("Skup 1:  ");
	for (i = 0; i < S1N; i++){
		printf("%d", skup1[i]);
		if (i < S1N - 1){
			printf(",");
		}
	}
	printf("\n");
	printf("Skup 2:  ");
	for (i = 0; i < S2N; i++){
		printf("%d", skup2[i]);
		if (i < S2N - 1){
			printf(",");
		}
	}
	printf("\n");
	unija(S1N, &skup1[0], S2N, &skup2[0], &nunija, &unijapov[0]);
	for (i = 0; i < nunija; i++){
		printf("%d ", unijapov[i]);

	}
	scanf_s("\n");
	return 0;
}