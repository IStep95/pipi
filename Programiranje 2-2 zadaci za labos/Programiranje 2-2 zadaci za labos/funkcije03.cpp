#include "funkcije03.h"
void unija(int n1, int *s1, int n2, int *s2, int *nrez, int *rez){
	int i, j, k = 0;
	int postoji;
	for (i = 0; i < n1; i++){
		*(rez + i) = *(s1 + i);
		k++;
	}
	for (i = 0; i < n2; i++){
		postoji = 0;
		for (j = 0; j < n1; j++){
			if (*(s2 + i) == *(s1 + j)){
				postoji = 1;
				break;
				
			}
		}
		if (postoji == 0){
			*(rez + k) = *(s2 + i);
			k++;
		}
		

	}
	*(nrez) = k;

	
}
