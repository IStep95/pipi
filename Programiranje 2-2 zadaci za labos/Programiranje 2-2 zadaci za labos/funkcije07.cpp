#include "funkcije07.h"
#include <string.h>
#include <ctype.h>
#include <stdio.h>
int brojNeSlova(char *niz){
	int i, broj=0, l;
	l = strlen(niz);
	for (i = 0; i < l; i++){
		if (!isalpha(*(niz + i))){
			broj++;
		}
	}
	return broj;
}
void caesarEncrypt(char *nizUlaz, char *nizIzlaz, int kljucKriptiranja){
	int i, l, v, b, k; 
	char a;
	l = strlen(nizUlaz);
	for (i = 0; i < l; i++){
		a = *(nizUlaz + i);
	
		if (a + kljucKriptiranja > 'z'){
			k = kljucKriptiranja;
			v = 'z' - a;
			*(nizIzlaz + i) = 'a' + (k - v -1);
		}
		else if (a + kljucKriptiranja > 'Z' && a + kljucKriptiranja  < 'a'){
			k = kljucKriptiranja;
			v = 'Z' - a;
			*(nizIzlaz + i) = 'A' + (k - v -1);
		}
		else{ 
			*(nizIzlaz + i) = *(nizUlaz + i) + kljucKriptiranja;
		}
	}
}