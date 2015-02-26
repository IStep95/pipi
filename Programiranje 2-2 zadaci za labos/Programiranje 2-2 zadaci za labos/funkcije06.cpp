#include "funkcije06.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int brRijeci(char *tekst){
	int i = 0, j = 0, l=0, broj = 1;
	char a='\0', b='\0', tmp[1024];
	
	while(*(tekst + i) != '\0'){
		a = *(tekst + i);
		if (!(isalnum(a)) && a != ' ' && a != ',' && a != '.' && a != '!' && a != '?'){
			return -1;
		}
		l++;
		i++;
		
	}
	i = 0;
	
	while (i < l){
		a = *(tekst + i);
		if (i > 0) {
			b = *(tekst + i - 1);
		}
		
		if (a == ' ' || a == ',' || a == '.' || a == '!' || a == '?'){
			broj++;
		}
		if (((b == ' ' || b == ',' || b == '.' || b == '!' || b == '?')) && ((a == '\0' || a == ' ' || a == ',' || a == '.' || a == '!' || a == '?'))){
			broj--;
		}



		i++;
	}
	
	if (a == ' ' || a == ',' || a == '.' || a == '!' || a == '?'){
		broj--;
	}

	if(broj >= 1){
		return broj;
	}
	


}
int izbaciBrojeve(char *tekst){
	int i=0, j = 0, l=0, promjena=0;
	char a;
	while (*(tekst + i) != '\0'){
		a = *(tekst + i);
		if (!isdigit(a)){
			*(tekst + j) = a;
			j++;
			promjena = 1;
		}
		i++;
		l++;
	
	}

	for (i = j; i < l; i++){
		*(tekst + i) = NULL;
	}
	if (promjena == 1){
		return 1;

	}
	return 0;
	




}