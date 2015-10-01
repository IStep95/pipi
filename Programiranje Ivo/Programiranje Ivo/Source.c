



#include<stdio.h>
float sinx3(float x){
	float r;
	r = x - (x*x*x / 6) + (x*x*x*x*x / 120) - (x*x*x*x*x*x*x / 5040);
	return r;
}
int main3(void){
	float t = 3.14 / 100;
	for (int i = 0; i < 100; i++){
		printf("%10d %10f \n", (i + 1), sinx3(i*t));
	}
	scanf("\n");
	return 0;
	



}