#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>


void genPodniz(char *niz, char *podNiz, int pocPozicija, int duljPodniz){
	int i, j=0;
	for (i = pocPozicija; i < pocPozicija + duljPodniz; i++){
		*(podNiz + j) = *(niz + i);
		j++;
	}
	*(podNiz + j) = '\0';

}

int sadrziPodniz(char *niz, char *podNiz){
	int i=0,j, l, l1, l2, brojac=0;
	char tmp[300];
	while (niz[i] != '\0'){
		i++;
	}
	l = i;
	for (i = 0; i < l; i++){
		if (*(niz + i) == *(podNiz + brojac)){

			*(tmp + brojac) = *(podNiz + brojac);
			brojac++;
		}
	}

	*(tmp + brojac + 1) = '\0';

		i = 0;
		while (tmp[i] != '\0'){
			i++;
		}
		l1 = i;
		i = 0;
		while (podNiz[i] != '\0'){
			i++;
		}
		l2 = i;
			if (l1 == l2){
				return 1;
		
			}
			else{
				return 0;
			}

}

