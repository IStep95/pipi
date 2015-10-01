#include <stdio.h>
int main(void) {
	int broj, suma = 0;
	printf("Upisite broj: ");
	scanf("%d", &broj);
	while (broj != 0) {
		suma = suma + broj;
		printf("Upisite broj: ");
		scanf("%d", &broj);
	}
	printf("Suma=%d.\n", suma);
	scanf("\n");
	return 0;

}