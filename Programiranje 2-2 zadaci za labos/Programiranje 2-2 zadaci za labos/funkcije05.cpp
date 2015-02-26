#include "funkcije05.h"
#include <stdlib.h>
char *prviZnak(char *niz1, char *niz2, int l1, int l2){
	int i, j;
	for (i = 0; i < l2; i++){
		for (j = 0; j < l1; j++){
			if (niz1[j] == niz2[i]){
				return &niz2[i];
			}
			
		}
	}
	return NULL;

}
int brojRecenica(char *niz, int l){
	int i, broj=0;
	char *p;
	char *pokazivac;
	p = prviZnak(".!?", niz, 3, l);
	for (i = 0; i < l; i++){
		if (p == NULL){
			return broj;
		}
		else{

			while ((pokazivac = prviZnak(".!?", niz, 3, l)) != NULL){
				*pokazivac ='0';

			     broj++;
			}
		}
		
	}
	return broj;
}
