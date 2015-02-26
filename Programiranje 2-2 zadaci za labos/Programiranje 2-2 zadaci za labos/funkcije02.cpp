#include "funkcije02.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define A 9001
#define C 29
#define M 225
static int xi = 1;
void setSeed(unsigned int seed){
printf("Upisite sjeme.\n");
scanf_s("%u", &seed);
xi = seed;
if (xi == 0){
	exit(0);
}
}
unsigned int getRand(){
	
	xi = (A * xi + C) % M ;


	return xi;
}