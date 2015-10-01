#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
void zadatak1(){
	int i, j, k, x;
	printf("Upisi broj.\n");
	scanf_s("%d", &x);
	if (x<5 || x>20){
		printf("Neispravan broj\n");
		exit(1);
	}
	else {
		for (i = 0; i <= x; i++){
			for (j = 0; j <= x; j++){
				if (j <= i){
					printf("%4.1f ", (float)j / 10);
				}
				else {
					printf("     ");
				}
			}
			printf(" %2d.red\n", i);
		}
	}
}
void zadatak2(){
	int i, l;
	char x[61];
	gets_s(x);
	l = strlen(x);
	if (l < 10){
		printf("Prekratak niz. \n");
		exit (0);
	}
	else{
		for (i = 0; i < l; i += 2){
			if (islower(x[i])){
				printf("%c\n", x[i]);
			}
		}
	}

}
void zadatak3(){
	int i=0, l;
	char x[61];
	gets_s(x);
	l = strlen(x);
	if (l < 10){
		printf("Prekratak niz. \n");
		exit(0);
	}
	else{
		i == l;
		for (i = l; i >= 0; i--){
			if (isupper(x[i]) || isdigit(x[i])){
				printf("%c\n", x[i]);
			}
		}
	}

}
void zadatak4(){
	int i, n, polje[20];
	int pozicija[20] = { 0 };
	printf("Unesi broj clanova polja. \n");
	do{
		scanf_s("%d", &n);
	} while (n < 1 || n > 20);
	for (i = 0; i < n; i++){
		scanf_s("%d", &polje[i]);
		pozicija[i] = i;
	}
	for (i = 0; i < n; i++){
		if (polje[i] >= 10 && polje[i] <= 20){
			printf("%d. %d\n", pozicija[i], polje[i]);
		}
	}
}
void zadatak5(){
#define PI 3.141593
	int i,n;
	float cetvrtPi =0.0, Pi, aps;
	do{
		scanf_s("%d", &n);
	} while (n < 1 || n > 1000);
	for (i = 1; i <= n; i++){
		if (i % 2 == 0){
			cetvrtPi = cetvrtPi - (1. / (2 * i - 1));
		}
		else{
			cetvrtPi = cetvrtPi + (1. / (2 * i - 1));
		}
	}
	Pi = 4 * cetvrtPi;
	printf("Vrijednost Pi preko parcijalne suma %f\n", Pi);
	aps = Pi - PI;
	if (aps < 0){
		aps = (-1)*aps;
	}
	printf("Apsolutna vrijednost pogreske %f", aps);
}
void zadatak6(){
	int n, i;
	float polovina=0, aps;
	do{
		scanf_s("%d", &n);
	} while (n < 1 || n > 1000);
	for (i = 1; i <= n; i++){
		polovina += 1. / ((2 * i - 1)*(2 * i + 1));
	}
	printf("Vrijednost 0.5 izracunata preko parcijalne sume: %f", polovina);
	aps = 0.5 - polovina;
	if (aps < 0){
		aps = aps * (-1);
	}
	printf("\n");
	printf("Apsolutna pogreska 0.5 i parcijalne sume: %f", aps);



}
void zadatak7(){
	int i, l;
	char niz[20];
	gets_s(niz);
	l = strlen(niz);
	if (l < 8){
		printf("Prekratak\n");
	}

	else{
		for (i = 0; i < l; i++){
			/*Moglo je i sa isalpha*/
			if (islower(niz[i]) || isupper(niz[i])){
				printf("Zadovoljava uvjete\n");
				break;
			}
			else {
				printf("Ne sadrzi slovo\n");
				break;
			}
		}
		
	}
	
}
void zadatak8(){
	int i, brojacS=0, brojacZ=0;
	char niz[30];
	gets_s(niz);
	for (i = 0; i < strlen(niz); i++){
		if (islower(niz[i])){
			brojacS++;
		}
		if (isdigit(niz[i])){
			brojacZ++;
		}
	}
	if (brojacS >= 7 && brojacZ >= 2){
		printf("Zadovoljava uvjete\n");
	}
	else {
		printf("Ne zadovoljava uvjete\n");
	}
}
void zadatak9(){
	int i, n, polje[30];
	printf("Ucitaj broj clanova polja [1,30]\n");
	do{
		scanf_s("%d", &n);
	} while (n < 1 || n > 30);
	printf("Ucitaj clanove polja:\n");
	for (i = 0; i < n; i++){
		scanf_s("%d", &polje[i]);
	}
	for (i = 0; i < n; i++){
		if (polje[i] >= -1 && polje[i] <= 22){
			polje[i] = 0;
		}
	}
	printf("Promijenjeno polje: \n");
	for (i = 0; i < n; i++){
		printf("%d ", polje[i]);
	}
}
void zadatak10(){
	int i, n, polje[20], zbroj=0;
	do{
		scanf_s("%d", &n);
	} while (n < 1 || n > 20);
	for (i = 0; i < n; i++){
		scanf_s("%d", &polje[i]);
	}
	for (i = 0; i < n; i++){
		if (polje[i] >= -10 && polje[i] <= 10){
			zbroj += polje[i];
			polje[i] = 0;
		}
	}
	printf("Zbroj vrijednosti promijenjenih elemenata: %d", zbroj);
}
void zadatak11(){
	int i, n, brojac=0;
	int polje[15];
	int polje2[15] = {0};
	do{
		scanf_s("%d", &n);
	} while (n < 1 || n > 15);
	for (i = 0; i < n; i++){
		scanf_s("%d", &polje[i]);
	}
	for (i = 0; i < n; i++){
		if ((polje[i] >= -10) && (polje[i] <= 15)){
			polje2[brojac]=polje[i];
			brojac++;
		}
	}
	printf("Novo polje: \n");
	for (i = 0; i < brojac; i++){
		printf("%d ", polje2[i]);
		
	}
}
void zadatak12(){
	int i, j, koliko, brojac=0;
	int n[100];
	do{
		
		scanf_s("%d", &n[brojac]);
			if (n[brojac] < -30 || n[brojac] > 30){
				printf("Neispravan unos.\n");
				exit(1);
			}
			
			koliko = 0;
			for (j = 0; j <= brojac; j++){
				if (n[j] == n[brojac]){
					koliko++;
				}
			}
			brojac++;
			if (koliko >= 3){
				printf("Ukupno je ucitano: %d", brojac);
				break;
			}
			
		
	} while (true);
}
void zadatak13(){
	int i, j;
	int polje[100] = {0};
	int koliko = 0;
	do{
		scanf_s("%d", &i);
		if (i >= 1 || i <= 30){
			polje[i - 1]++;
		}

	} while (i >= 1 && i <= 30);
	for (i = 0; i < 30; i++){
		if (polje[i] >= 2){
			printf("Broj %d se pojavio %d", i + 1, polje[i]);
		}
	}
}
void zadatak14(){
	int n, x, uku=0, i=0;
	int polje[100] = { 0 };
	int lok[100];
	while (true){
		scanf_s("%d", &n);
		lok[i] = n;
		if (n >= 1 && n <= 30){
			polje[n - 1]++;
			
			
			if (polje[n - 1] >= 2){
				x = n;
				break;
			}
			
		}
		uku++;
		i++;
	}
	for (i = 0; i < uku; i++){
		if (lok[i] == x){
			n = i;
		}
	}
	printf("Broj %d bio je %d. ucitani broj.", x, n);
	printf("Ukupno ucitano brojeva %d", uku);




}
void zadatak15(){
	int n, i = 0, j, uku = 0;
	int lok[100];
	do{
		scanf_s("%d", &n);
		lok[i] = n;
		if (n >= 1 && n <= 40){
			i++;
			uku++;
		}
	} while (n >= 1 && n <= 40);
	for (i = 1; i <= 40; i++){
		for (j = 0; j < uku; j++){
			if (i == lok[j]){
				printf("Broj %d : %d \n", i, j+1);
				n = 1;
				break;
			}
		}
	}
	

}
void zadatak16(){
	int i = 0, l, pom;
	char niz[21];
	gets_s(niz);
	l = strlen(niz);
	printf("%s\n", niz);
	for (i = 0; i < l; i++){
		if (islower(niz[i])){
			pom = niz[i];
			niz[i] = niz[l-1];
			niz[l-1] = pom;
			break;
		}
	}
	printf("%s", niz);
}
void zadatak17(){
	int i, brojac = 0, l1, l2, pom[32];
	char niz1[31], niz2[32];
	gets_s(niz1);
	gets_s(niz2);
	l1 = strlen(niz1);
	l2 = strlen(niz2);
	for (i = 0; i < l1; i+=2){
		pom[i] = niz1[i];
		niz1[i] = niz2[i];
		niz2[i] = pom[i];
		brojac++;
	}
	printf("%s\n", niz1);
	printf("Promijenjeno znakova: %d", brojac);

}
void zadatak18(){
	int i, broj, polje[10] = {0};
	do{
		scanf_s("%d", &broj);
	} while (broj < 100 && broj > 99999);
	printf("Znamenke u broju %d su:\n", broj);
	do{
		polje[broj % 10]++;
		broj = broj / 10;
	} while (broj != 0);
	for (i = 0; i < 10; i++){
		if (polje[i] != 0){
			printf("-  Znamenka %d: %d\n", i, polje[i]);
		}
	}


	
}
void zadatak19(){
	int i,broj, polje[10] = {0}, MAX, number;
	do{
		scanf_s("%d", &broj);
	} while (broj < 100 || broj > 99999);
	number=broj;
	do{
		polje[broj % 10]= broj % 10;
		broj = broj / 10;
	} while (broj != 0);
	MAX = polje[0];
	for (i = 0; i < 10; i++){
		if (polje[i] > polje[0]){
			MAX = polje[i];
		}
	}
	printf("U broju %d najveca znamenka je: %d", number, MAX);
}
void zadatak20(){
	int i=0, broj, original, polje[10] = {0};
	int prva, zadnja;
	do{
		scanf_s("%d", &broj);
	} while (broj < 1 && broj > 99999);
	original = broj;
		zadnja = broj % 10;
		while (broj != 0){
			prva = broj % 10;
			broj = broj / 10;
		}

		if (prva == zadnja){
			printf("Broj %d: prva i zadnja znamenka su jednake", original);
		}
		else if (prva < zadnja){
			printf("Broj %d: prva je manja od zadnje", original);
		}
		else{
			printf("Broj %d: prva je veca od zadnje", original);
		}
}
void zadatak21(){
	int i, broj, suma=0, polje[10] = {0};
	do{
		scanf_s("%d", &broj);
	} while (broj < 1 && broj > 99999);
	printf("%d", broj);
	while (broj != 0){
		polje[broj % 10]++;
		broj /= 10;
	}
	for (i = 0; i < 10; i++){
		if (polje[i] == 1){
			suma += i;
		}
	}
	printf("- suma znamenaka koje se jednom pojavljuju: %d", suma);

}
void zadatak22(){
	int i, broj, original, novi, polje[3];
	do{
		scanf_s("%d", &broj);
		original = broj;
	} while (broj < 100 || broj > 999);
	for (i = 0; i < 3; i++){
		polje[i] = broj % 10;
		broj /= 10;
	}

	novi = polje[0] * 100 + polje[1] * 10 + polje[2];
	printf("%d %d\n", original, novi);
	if (novi > original){
		printf("Broj %d je veci od ucitanog broja", novi);
	}
	else if (novi == original){
		printf("Broj %d je jednak ucitanom broju", novi);
	}
	else{
		printf("Broj %d je manji od ucitanog broja\n", novi);
	}
}
void zadatak23(){
	int i, brojac = 0;
	char binNiz[11];
	gets_s(binNiz);
	for (i = 0; i < (strlen(binNiz)); i++){
		if ((binNiz[i] != '0') && (binNiz[i] != '1')){
			printf("Ucitani niz nije ispravno zadan. \n");
			break;
		}
	}
	i = 0;
	while (binNiz[i] != '\0'){
		if ((binNiz[i] == '0') && (binNiz[i+1] == '0')){
				brojac++;
		}
		i++;
	}
	if (brojac >= 1){
		printf("Ucitani binarni broj sadrzi dvije ili vise uzastopnih znamenki 0.\n");
	}
	else{
		printf("Ucitani binarni broj ne sadrzi dvije ili vise uzastopnih znamenki 0. \n");
	}
}
void zadatak24(){
	int i = 0, brojac = 0;
	char oktalni[6];
	gets_s(oktalni);
	for (i = 0; i < strlen(oktalni); i++){
		if (isdigit(oktalni[i]) && oktalni[i] != '8' && oktalni[i] != '9'){
			continue;

		}
		else{
			printf("Ucitani niz nije ispravno zadan. \n");
			break;
		}

	}
	for (i = 0; i < strlen(oktalni); i++){
		if (oktalni[i] == '4'){
			brojac++;
		}
	}
	printf("Znamenka 4 se u ucitanom broju pojavljuje %d puta.", brojac);





}
void zadatak25(){
	int i, prva, zadnja;
	char oktalni[6];
	gets_s(oktalni);
	for (i = 0; i < strlen(oktalni); i++){
		if (isdigit(oktalni[i]) && oktalni[i] != '8' && oktalni[i] != '9'){
			continue;
		}
		else{
			printf("Ucitani niz nije ispravno zadan. \n");
			break;
		}
	}
	for (i = 0; i < strlen(oktalni); i++){
		if (isdigit(oktalni[i]) && oktalni[i] != '8' && oktalni[i] != '9'){
			
			prva = oktalni[0];
			zadnja = oktalni[strlen(oktalni) - 1];
			printf("Prva znamenka ucitanog broja je %c \n", prva);
			printf("Zadnja znamenka ucitanog broja je %c \n", zadnja);
			break;
		}
		else{
			break;
		}
	}
}
void zadatak26(){
	int i, l, brojac = 0;
	char temp[6], heks[6], max;
	gets_s(heks);
	l = strlen(heks);
	max = temp[0];
	for (i = 0; i < l; i++){
		if (heks[i] < '0' || heks[i] > '9' && heks[i] < 'A' || heks[i] > 'F' && heks[i] < 'a' || heks[i] > 'f'){
			printf("Ucitani niz nije ispravno zadan. \n");
			
		}
		else{
			
				temp[i] = heks[i];
				temp[i] = toupper(heks[i]);
			if (temp[i] > max){
				max = temp[i];
				max = heks[i];
			}
			
		}
	}
	
	printf("Najveca heksadekadska znamenka u ucitanom broju je: %c", max);
}
void zadatak27(){
	int i=0, n,j, max, min;
	int polje[100];
	do{
		scanf_s("%d", &n);
		if (n >= 0 && n <= 100){
			polje[i] = n;
			i++;
		}
	} while (n >= 0 && n <= 100);
	max = polje[0];
	min = polje[0];
	if (i == 0){
		printf("Nije unesen niti jedan broj iz trazenog intervala. ");
		exit(1);
	}
	else{
		for (j = 0; j < i; j++){
			if ((polje[j] > max) && (polje[j] % 4 == 0)){
				max = polje[j];
			}
			if ((polje[j] < min) && (polje[j] % 4 == 0)){
				min = polje[j];
			}
		}
	}
	printf("Zbroj najveceg (%d) i najmanjeg (%d) unesenog broja djeljivog s 4 je %d.", max, min, max + min);

}
void zadatak28(){
	int i = 0;
	int n, polje[100], zbroj=0;
	do{
		scanf_s("%d", &n);
		if (n >= 0 && n <= 100){
			polje[i] = n;
			if (polje[i] < 50){
				zbroj += polje[i];
			}
			i++;
		}
	} while (n >= 0 && n <= 100);

	if (i == 0){
		printf("Nije unesen niti jedan broj iz trazenog intervala. \n");
		exit(1);
	}
	else{
		printf("Zbroj svih unesenih brojeva manjih od 50 je %d. ", zbroj);
	}
}
void zadatak29(){
	int i, l, brojac = 0;
	char heks[11];
	gets_s(heks);
	l = strlen(heks);
	for (i = 0; i < l; i++){
		if (heks[i] < '0' || heks[i] > '9' && heks[i] < 'A' || heks[i] > 'F' && heks[i] < 'a' || heks[i] > 'f'){
			printf("Ucitani niz nije ispravno zadan. \n");
			exit(1);
		}
		else{

			if (isdigit(heks[i]) && heks[i] != '8' && heks[i] != '9'){
				brojac++;
			}
		}
	}

	printf("Broj unesenih oktalnih znamenki: %d", brojac);
}
void zadatak30(){
	int i=0,j=0, k, n, polje[100];
	int krivi[50], max,max2;
	do{
		scanf_s("%d", &n);
		krivi[j] = n;
		if (n >= 0 && n <= 100){
			polje[i] = n;
			i++;
		}
		j++;
	} while (n >= 0 && n <= 100);
	max = 0;
	max2 = 1;
	if (krivi[0] < 0 || krivi[0] > 100 || krivi[1] < 0 || krivi[1] > 100){
		printf("Nije uneseno dovoljno brojeva iz trazenog intervala.");
		exit(1);
	}
	for (k = 0; k < i; k++){
		if (polje[k] > max){
			max = polje[k];
		}
			else if(polje[k] > max2 && max2 <= max){
			max2 = polje[k];
			}
	}
	
	printf("Ostatak pri djeljenju %d sa %d je %d.",max,max2, max % max2);
}
void zadatak31(){
	int i, l;
	char niz[31];
	gets_s(niz);
	l = strlen(niz);
	puts(niz);
	for (i = 0; i < l; i++){
		if (!(isalnum(niz[i]))){
			printf("Ucitani niz nije ispravno zadan. \n");
		}
		else{
			if (niz[i] == 'a'){
				niz[i] = '9';
			}
			if (niz[i] == 'e'){
				niz[i] = '8';
			}
			if(niz[i] == 'i'){
				niz[i] = '7';
			}
		}
	}
	for (i = 0; i < l; i++){
		printf("%c", niz[i]);
	}
}
void proba(){
	int i=0, att = 1;
	char niz[10];
	double broj = 0, faktor = 1;
	gets_s(niz);
	while (niz[i] != '\0'){
		i++;
		faktor *= 10;
	}
	faktor /= 10;

	for (i = 0; niz[i] != '\0'; i++){
		if (niz[i] < '0' || niz[i] > '9'){
			att = 0;
			printf("Dopustene samo dekadske znamenke.");
			break;
		}
	}
	if (att == 1){
		for (i = 0; niz[i] != '\0'; i++){
			
			broj += faktor*(niz[i] - 48);
			faktor /= 10;
			
		}
	}

	printf("%.0lf  %lf\n", broj, sqrt(broj));

}

int main(void){
	zadatak17();
	scanf_s("\n");
	return 0;
}