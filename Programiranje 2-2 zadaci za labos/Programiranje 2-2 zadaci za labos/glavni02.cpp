#include<stdio.h>





#include<string.h>
#include"funkcije02.h"
#include<stdlib.h>
#include<time.h>
#include<ctype.h>
int main3(void){
	int i, j, xi = 1, l, tmp;
	char rec[225];
	while (xi != 0){
		setSeed(xi);
		l = getRand();
		srand(time(NULL));
		i = 0;
		while (i < l) {
			tmp = rand() % 128;
			if (isalpha(tmp) || tmp == ',' || tmp == ' '){
				rec[i] = tmp;
				i++;
			}
		}
		rec[i] = '.';
		i++;
		for (j = 0; j < i; j++){
			printf("%c", rec[j]);
		}

	}
	scanf_s("\n");
	return 0;
}