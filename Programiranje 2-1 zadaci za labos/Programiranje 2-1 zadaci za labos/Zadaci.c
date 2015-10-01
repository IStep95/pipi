#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define pi 3.141593
void zadatak1(){
	int i, j;
	float x;
	scanf("%f", &x);
	if (x < 5 || x > 20){
		printf("Neispravan broj. \n");
		exit(1);
	}
	for (i = 0; i <= x + 1; i++){
		for (j = 0; j <= x + 1; j++){
			if (i >= j){
				printf("%4.1f",  (float)j/ 10);
			}
			else{
				printf("    ");	
			}
			if (j == x + 1){
				printf("  %2d.red", i);
			}
		}
		printf("\n");
	}

}
void zadatak2(){
	int i, j, l;
	char x[61];
	gets(x);
	l = strlen(x);
	if (l < 10){
		printf("Prekratak niz.\n");
		exit(1);
	}
	for (i = 0; i < l; i+=2){
		if (islower(x[i])){
			printf("%c\n", x[i]);
		}
	}

}
void zadatak3(){
	int i, j, l;
	char x[61];
	gets(x);
	l = strlen(x);
	if (l < 10){
		printf("Prekratak niz");
		exit(1);
	}
	for (i = l; i >= 0; i--){
		if (isupper(x[i]) || isdigit(x[i])){
			printf("%c\n", x[i]);
		}
	}



}
void zadatak4(){
	int i, j, n;
	int x[20];
	do{
		printf("Ucitaj broj clanova cjelobrojnog polja.\n");
		scanf("%d", &n);
	} while (n<1 || n>20);
		printf("Ucitaj clanove polja:");
	for (i = 0; i < n; i++){
		printf("\n %d. clan ", i + 1);
		scanf("%d", &x[i]);
	}
	printf("Ispisivanje clanova i poz. cije su vrijednosti iz intervala [10,20]\n");
	for (i = 0; i < n; i++){
		if (x[i] >= 10 && x[i] <= 20){
			printf("%2d. %2d\n", i, x[i]);
		}
	}


}
void zadatak5(){
	int i,n;
	float picetvrt = 0;
	do{
		scanf("%d", &n);
	} while (n<1 || n>1000);
	for (i = 0; i < n; i++){
		if (i % 2 == 0){
			picetvrt = picetvrt + ((float)1 / (2 * i + 1));
		}
		else{
			picetvrt = picetvrt - ((float)1 / (2 * i + 1));
		}
	}
	printf("%f\n", picetvrt*4);
	picetvrt *= 4;
	printf("Apsolutna pogreska je %f\n", fabs(pi - picetvrt));
}
void zadatak6(){
	int i,n;
	float pola = 0;
	do{
		scanf("%d", &n);
	} while (n<1 || n>1000);
	for (i = 1; i <= n; i++){
		pola += (float)1 / ((2 * i - 1)*(2 * i + 1));
	}
	printf("Pola %f \n", pola);
	printf("Apsolutna pogreska: %f", fabs(pola - 0.5));
}
void zadatak7(){
	int i, l, postoji=0;
	char niz[21];
	gets(niz);
	l = strlen(niz);
	for (i = 0; i < l; i++){
		if (isalpha(niz[i])){
			postoji = 1;
		}
	}
	if (l < 8){
		printf("Prekratak");
	}
	else if (postoji == 0){
		printf("Ne sadrzi slovo");
	}
	else{
		printf("Zadovoljava uvjete");
	}
	
}
void zadatak8(){
	int i, l, mala=0, znamenke=0;
	char niz[31];
	gets(niz);
	l = strlen(niz);
	for (i = 0; i < l; i++){
		if (islower(niz[i])){
			mala++;
		}
		if (isdigit(niz[i])){
			znamenke++;
		}
	}
	if (mala < 7 || znamenke < 2){
		printf("Ne zadovoljava uvjete");
	}
	else{
		printf("Zadovoljava uvjete");
	}
}
void zadatak9(){
	int i, n, x[30];
	do{
		scanf("%d", &n);
	} while (n<1 || n>30);
	for (i = 0; i < n; i++){
		scanf("%d", &x[i]);
	}
	printf("Promijenjeno polje: \n");
	for (i = 0; i < n; i++){
		if (x[i] >= -1 && x[i] <= 22){
			x[i] = 0;
		}
		printf("%d ", x[i]);
	}
}
void zadatak10(){
	int i, n, zbroj=0;
	int x[20];
	do{
		scanf("%d", &n);
	} while (n<1 || n>20);
	for (i = 0; i < n; i++){
		scanf("%d", &x[i]);
	}
	for (i = 0; i < n; i++){
		if (x[i] >= -10 && x[i] <= 10){
			zbroj += x[i];
			x[i] = 0;
		}
		
	}
	printf("Zbroj vrijednosti promijenjenih elemenata: %d", zbroj);
}
void zadatak11(){
	int i, j=0, n;
	int polje1[15], polje2[15] = {0};
	do{
		scanf("%d", &n);
	} while (n<1 || n>15);
	for (i = 0; i < n; i++){
		scanf("%d", &polje1[i]);
		if (polje1[i] >= -10 && polje1[i] <= 15){
			polje2[j] = polje1[i];
			j++;
		}
	}
	printf("Novo polje: ");
	for (i = 0; i < j; i++){
		printf("%4d", polje2[i]);
	}

}
void zadatak12(){
	int n, polje[100]={0}, brojac=0;
	do{
		scanf("%d", &n);
		if (n < -30 || n > 30){
			printf("Neispravan broj");
			exit(1);
		}
		brojac++;
		polje[n + 30]++;
		if (polje[n + 30] >= 3){
			break;
		}

	} while (n >-30 && n<30);
	printf("Ukupno je ucitano %d brojeva", brojac);



}
void zadatak13(){
	int i, n, brojac=0;
	int polje[100] = { 0 };
	do{
		scanf("%d", &n);
		polje[n]++;
		brojac++;

	} while (n >= 1 && n <= 30);
	for (i = 0; i < n; i++){
		if (polje[i] >= 2){
			printf("broj %d: %2d\n", i, polje[i]);
		}
	}

}
void zadatak14(){
	int i=0,j, n, ukupno=0;
	int lok[100] = { 0 }, frekvencija[100] = { 0 };
	while(1){
		scanf("%d", &n);
		if (n<1 || n> 30){
			continue;
		}
		
		frekvencija[n]++;
		i++;
		ukupno++;
		lok[i] = n;
		
		if (frekvencija[n] > 1){
			break;
		}

	}

	for (i = 0; i < ukupno; i++){
		if (frekvencija[i] == 2){
			printf("Broj %d bio je ", i);
			for (j = 0; j < ukupno; j++){
				if (lok[j] == i){
					printf("%d. ucitani broj. \n", j);               
				}
			}
		}
	}
	printf("Ukupno ucitano %d brojeva.", ukupno);

}
void zadatak15(){
	int i=0,j,n;
	int lok[100] = { 0 };
	int frekvencija[100] = { 0 };
	while (1){
			
		scanf("%d", &n);
		if (n<1 || n>40){
			break;
		}
		
		lok[i] = n;
		frekvencija[n]++;
		i++;
	}

	for (i = 0; i < n; i++){
		if (frekvencija[i] >= 1){
			printf("Broj %3d : ", i);
			for (j = 0; j < n; j++){
				if (lok[j] == i){
					printf("%2d \n", j+1);
					break;
				}

			}
		}

	}
}
void zadatak16(){
	int i, l;
	char pom, niz[21];
	gets(niz);
	l = strlen(niz);
	for (i = 0; i < l; i++){
		if (islower(niz[i])){
				pom = niz[i];
				niz[i] = niz[l-1],
				niz[l-1] = pom;
				break;
		}
	}
	puts(niz);

}
void zadatak17(){
	int i, l, brojac=0;
	char niz1[31];
	char niz2[31];
	gets(niz1);
	gets(niz2);
	l = strlen(niz1);
	for (i = 0; i < l; i+=2){
		niz1[i] = niz2[i];
		brojac++;
	}
	printf("Promijenjeni niz: ");
	puts(niz1);
	printf("Promijenjeno znakova: %d", brojac);
}
void zadatak18(){
	int i, n, l, brojac=0, prod=1;
	int frekvencija[10] = {0};
	do{
		scanf("%d", &n);

	} while (n<100 || n> 99999);
	l = n;
	while (1){
		l /= 10;
		brojac++;
		if (l == 0){
			break;
		}
	}
	l = n;
	for (i = 0; i < brojac; i++){
		l = l % 10;
		frekvencija[l]++;
		l = n / (10 * prod);
		prod *= 10;
	}
	printf("Znamenke u broju %d su: \n", n);

	for (i = 0; i < 10; i++){
		if (frekvencija[i] != 0)
			printf("-   znamenka %d: %d\n", i, frekvencija[i]);
	}



}
void zadatak19(){
	int i, n, tmp, najveca=0;
	int brojac = 0;
	do{
		scanf("%d", &n);
	} while (n<100 || n> 99999);
	tmp = n;
	while (1){
		tmp /= 10;
		brojac++;
		if (tmp == 0){
			break;
		}
	}
	tmp = n;
	for (i = 0; i < brojac; i++){
		
		if ((tmp % 10) >= najveca){
			najveca = tmp % 10;
		}
		tmp /= 10;
	}
	printf("U broju %d najveca znamenka je %d", n, najveca);

}
void zadatak20(){
	int i, prva, zadnja, n, tmp, brojac = 0;
	double prod;
	do{
		scanf("%d", &n);
	} while (n<100 || n>99999);
	tmp = n;
	while (1){
		tmp /= 10;
		brojac++;
		if (tmp == 0){
			break;
		}
	}
	tmp = n;
	prod = pow(10, brojac - 1);
		zadnja = tmp % 10;
		prva = tmp / (int)prod;
		if (prva > zadnja){
			printf("Broj %d: prva znamenka veca od zadnje ", n);
		}
		else if (prva < zadnja){
			printf("Broj %d: prva znamenka manja od zadnje ", n);
		}
		else{
			printf("Broj %d: prva i zadnja znamenka su jednake", n);
		}
}
void zadatak21(){
	int i=0, n, l,brojac=0, suma = 0, znamenka[6] = {0};
	int frekvencija[10] = { 0 };
	do{
		scanf("%d", &n);
	} while (n<1 || n>99999);
	l = n;
	while (1){
		znamenka[i] = l % 10;
		i++;
		l /= 10;
		brojac++;
		if (l == 0){
			break;
		}
	}
	for (i = 0; i < brojac; i++){
		frekvencija[znamenka[i]]++;
	}
	for (i = 0; i < 10; i++){
		if (frekvencija[i] == 1){
			suma += i;
		}
	}
	printf("Broj %d  -  suma znamenaka koje se jednom pojavljuju: %d", n, suma);



}
void zadatak22(){
	int i, n, tmp, prva, zadnja, srednja, novi;
	do{
		scanf("%d", &n);
			
	} while (n<100 || n>999);
	tmp = n;
	prva = tmp % 10;
	zadnja = tmp / 100;
	tmp /= 10;
	srednja = tmp % 10;
	novi = prva * 100 + srednja *10 + zadnja;
	if (novi > n){
		printf("Broj %d veci je od ucitanog broja. ", novi);
	}
	else if (novi < n){
		printf("Broj %d manji je od ucitanog broja", novi);
	}
	else{
		printf("Jednaki su");
	}
}
void zadatak23(){
	int i, l, postoji=0, brojinule=1;
	char broj[11];

		gets(broj);
		l = strlen(broj);
		for (i = 0; i < l; i++){
			if (broj[i] != '0' && broj[i] != '1'){
				postoji = 1;
				printf("Ucitani niz nije ispravno zadan.\n");
				break;
			}
		}
		if (postoji == 0){
			for (i = 0; i < l; i++){
				if (broj[i] == '0'){
					if (broj[i + 1] == '0'){
						brojinule++;
					}
				}
			}
			if (brojinule > 1){
				printf("Ucitani binarni broj sadrzi dvije ili vise uzastopnih znamenki 0.\n");
			}
			else{
				printf("Ucitani binarni broj ne sadrzi dvije ili vise uzastopnih znamenki 0. \n");
			}
		}

}
void zadatak24(){
	int i, l, postoji=0, broji4=0;
	char broj[6];
	gets(broj);
	l = strlen(broj);
	for (i = 0; i < l; i++){
		if (broj[i] != '0' && broj[i] != '1' && broj[i] != '2' && broj[i] != '3' && broj[i] != '4' && broj[i] != '5' && broj[i] != '6' && broj[i] != '7'){
			printf("Ucitani niz nije ispravno zadan");
			postoji = 1;
			break;
		}
	}
	if (postoji == 0){
		for (i = 0; i < l; i++){
			if (broj[i] == '4'){
				broji4++;
			}
		}
		printf("Znamenka 4 se u ucitanom broju %s pojavljuje %d puta.", broj, broji4);

	}



}
void zadatak25(){
	int i, l, tmp, postoji=0;
	char Obroj[6];
	gets(Obroj);
	l = strlen(Obroj);
	for (i = 0; i < l; i++){
		if (Obroj[i] != '0' && Obroj[i] != '1' && Obroj[i] != '2' && Obroj[i] != '3' && Obroj[i] != '4' && Obroj[i] != '5' && Obroj[i] != '6' && Obroj[i] != '7'){
			printf("Ucitani niz nije ispravno zadan. \n");
			postoji = 1;
			break;
		}	
	}
	if (postoji == 0){
		printf("Prva znamenka ucitanog broja je %c. \n", Obroj[0]);
		printf("Posljednja znamenka ucitanog broja je %c. \n", Obroj[l-1]);
	}


}
void zadatak26(){
	int i, l, postoji=0, indeks;
	char niz[6], tmp[6], max = '\0';
	gets(niz);
	l = strlen(niz);
	for (i = 0; i < l; i++){
		if (!isdigit(niz[i]) && niz[i] != 'A' && niz[i] != 'B' && niz[i] != 'C' && niz[i] != 'D'&& niz[i] != 'E' && niz[i] != 'F' && niz[i] != 'a' && niz[i] != 'b' && niz[i] != 'c' && niz[i] != 'd' && niz[i] != 'e' && niz[i] != 'f'){
			printf("Ucitani niz nije ispravno zadan. \n");
			postoji = 1;
			break;
		}
	}
	
	if (postoji == 0){
		strcpy(tmp, niz);
		for (i = 0; i < l; i++){
			toupper(tmp[i]);
			if (tmp[i] > max){
				max = tmp[i];
				indeks = i; 
			}
		}
		printf("Najveca znamenka je %c", niz[indeks]);

	}
}
void zadatak27(){
	int i=0, niz[100] = {0}, max=0, min=100;
	int brojac = 0;
	while (1){
		scanf("%d", &niz[i]);
		if (niz[i] < 0 || niz[i] > 100){
			break;
		}
		i++;
		brojac++;
	}
	if (i == 0){
		printf("Nije unesen niti jedan broj iz trazenog intervala. \n");
		exit(1);
	}
	for (i = 0; i < brojac; i++){
		if (niz[i] > max && (niz[i] % 4 == 0)){
			max = niz[i];
		}
		else if (niz[i] < min && (niz[i] % 4 == 0)){
			min = niz[i];
		}
	}
	printf("Zbroj najveceg (%d) i najmanjeg (%d) unesenog broja djeljivog s 4 je %d.", max, min, max + min);


}
void zadatak28(){
	int i = 0, suma=0, niz[100] = { 0 }, brojac = 0;
	while (1){
		scanf("%d", &niz[i]);
		if (niz[i] < 0 || niz[i] > 100){
			break;
		}
		i++;
		brojac++;
	}
	if (i == 0){
		printf("Nije unesen niti jedan ispravan broj. \n");
		exit(1);
	}
	for (i = 0; i < brojac; i++){
		if (niz[i] < 50){
			suma += niz[i];
		}
	}
	printf("Zbroj svih unesenih brojeva manjih od 50 je %d.", suma);


}
void zadatak29(){
	int i, l, brojac=0;
	char niz[11];
	gets(niz);
	l = strlen(niz);
	for (i = 0; i < l; i++){
		if (!isdigit(niz[i]) && (niz[i] < 'A' || niz[i] > 'F') && (niz[i] < 'a' || niz[i] > 'f')){
			printf("Ucitani niz nije ispravno zadan.");
			exit(1);
		}
	}
	for (i = 0; i < l; i++){
		if (niz[i] >= '0' && niz[i] <= '7'){
			brojac++;
		}

	}
	printf("Broj unesenih oktalnih znamenki: %d", brojac);

	
}
void zadatak30(){
	int i=0, brojac=0, max=0, max2=0, indeks=0;
	int broj[100] = { 0 };
	while (1){
		scanf("%d", &broj[i]);
		if(broj[i] < 0 || broj[i] > 100){
			break;
		}
		i++;
		brojac++;
	}
	if (i < 3){
		printf("Nije uneseno dovoljno brojeva iz trazenog intervala.");
		exit(1);
	}
	for (i = 0; i < brojac; i++){
		if (broj[i] > max){
			max = broj[i];
			indeks = i;
		}
	}
	for (i = 0; i < brojac; i++){
		if (i == indeks){
			continue;
		}
		else if (broj[i] > max2){
				if (max2 <= max){
					max2 = broj[i];
				}
			}
	}

	printf("Ostatak pri dijeljenju %d sa %d je %d.", max, max2, (max % max2));
	
}
void zadatak31(){
	int i, l, postoji=0;
	char niz[31], tmp[31];
	gets(niz);
	l = strlen(niz);
	strcpy(tmp, niz);
	for (i = 0; i < l; i++){
		if (!isalnum(tmp[i])){
			printf("Ucitani niz nije ispravno zadan.");
			postoji = 1;
			break;
		}
	}
	if (postoji == 0){
		for (i = 0; i < l; i++){
			if (tmp[i] == 'a'){
				tmp[i] = '9';
			}
			else if (tmp[i] == 'e'){
				tmp[i] = '8';
			}
			else if (niz[i] == 'i'){
				tmp[i] = '7';
			}
			else{
				continue;
			}
		}
	}
	puts(niz);
	puts(tmp);

}
int main(void){
	zadatak30();
	scanf("\n");
	return 0;
}