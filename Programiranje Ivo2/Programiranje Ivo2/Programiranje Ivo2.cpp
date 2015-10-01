#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif



#include <stdio.h>
#include <cstdlib>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define MACRO(A,B,C) A*3/2 + B/C - 1
void zadatak1(){
	int gornja_granica, broj, brojac;
	float sredina, suma;
	suma = 0;
	brojac = 0;
	/*GORNJA GRANICA*/
	printf("Upisi gornju granicu.\n");
	scanf_s("%d", &gornja_granica);
	/*Brojevi*/
	printf("Upisuj brojeve:\n");
	for (int i = 1; suma <= gornja_granica; i++){
		scanf_s("%d", &broj);
		suma = suma + broj;
		brojac = brojac + 1;
	}
	/*ARITMETIÈKA SREDINA*/
	sredina = suma / brojac;
	printf("%f", sredina);
	scanf_s("\n");
}
void zadatak2(){
	int broj, poz=0, neg=0, nule=0;
	printf("Ucitavaj brojeve u intervalu [-100]U[100]\n");
	do{
		scanf_s("%d", &broj);
		if (broj > 0){
			poz++;
		}
		else if (broj == 0){
			nule++;
		}
		else{
			neg++;
		}
	
	} while (broj >= -100 && broj <= 100);
	printf("Broj pozitivnih brojeva je: %d\n", poz);
	printf("Broj negativnih brojeva je: %d\n", neg);
	printf("Broj nula: %d\n", nule);

}
void zadatak3(){
	int a , max;
	max = 0;
	do {
		scanf_s("%d", &a);
		if (max < a){
			max = a;
		}
		if (a < 0){
			printf("Nije unesen niti jedan pozitivan broj");
		}
		if (a > 0){
			printf("%d", max);
		}
	} while (a != 0);

		
		
}
void zadatak4(){
	int  n, broj, suma;
	float arit;
	printf("Za koliko brojeva zelite izracunati aritmeticku sredinu?\n");
	scanf_s("%d", &n);
	suma = 0;
	for (int i = 1; i <= n; i++) {
		printf("Unesite %d. broj:", i);
		scanf_s("%d", &broj);
		suma = suma + broj;
		
	}
	
	arit = suma / n;
	printf("Aritmeticka sredina je: %f", arit);

}
void zadatak5(){
	int i, n;
	printf("Upisite broj:\n");
	scanf_s("%d", &n);
	for (int i = n - 1; i= 10; i = i--){
		if (i % 2 == 0) 
			printf("%d\n", i);
	}
	


}
void zadatak7(){
	int x, y;
	float n, z;
	x = 2;
	n = 0;
	for (int i = 0; i <= 16; i++){
			y = pow(x, n);
			z = pow(x, -n);
			printf("%d. %d    %f\n", i, y, z);
			n = n + 1;

	}
}
void fibonacci(){
	int n;
	scanf_s("%d", &n);
	int neparni = 1;
	int parni = 1;
	for (int i = 1; i <= n; i++){
		if (i % 2 == 1){
			printf("%d ", neparni);
			neparni = neparni + parni;
			
		}
		else {
			printf("%d ", parni);
			parni = neparni + parni;
			
		}
	}


}
void fibonacci2(){
	int n, i;
	int neparni = 1;
	int parni = 1;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++){
		if (i % 2 == 1){
			printf("%d ", neparni);
			neparni = neparni + parni;
		}
		else {
			printf("%d ", parni);
			parni = neparni + parni;
		}

	}
}
void tablica_mnozenja(){
	int n = 10;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= n; j++){
			if (j % 3 == 0){
				break;
			}
			printf("%5d", i*j);
			
		}


		printf("\n");
	}

}
void ucitavanje_brojeva(){
	int input;
	while (true){
		scanf_s("%d", &input);
		if (input < 0){
			printf("Nedopustena vrijednost");
			break;
		}
		else if (input > 100){
			printf("Zanemarujem vrijednost");
		}
		else{
			printf("%d", input);
		}
		printf("\n");
	}


}
void ucitavanje_brojeva2(){
	int input;
	do{
		scanf_s("%d", &input);
		if (input < 0){
			printf("Nedopustena vrijednost");
		}
		else if (input > 100){
			printf("Zanemarujem vrijednost");
		}
		else{
			printf("%d", input);
		}
		printf("\n");
	} while (input >= 0);




}
void goto2(){
	goto oznaka2;
	oznaka1:
	printf("Prvi");
	oznaka2:
	printf("Drugi");
	goto oznaka1;
}
void prosjek(){
	int broj, i;
	float prosjek, suma;
	suma = 0;
	for (i = 0; i < 5; i++){
		scanf_s("%d", &broj);
		suma = suma + broj;

	}
	prosjek = suma / i;
	printf("%f\n", prosjek);

}
void prosjek_razreda(){
	int n, i;
	int ucenik[100];
	float suma=0;
	printf("Koliko ucenika?");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++){
		scanf_s("%d", &ucenik[i]);
	}
	for (i = 0; i < n; i++){
		printf("Ucenik rb %d. ima ocjenu %d\n", i+1,  ucenik[i]);
		suma = suma + ucenik[i];
	}
	printf("Prosjek razreda je: %f", suma/n);
	printf("Smece %d", ucenik[94]);
	printf("Greska %d", ucenik[100]);



}
void mi2012_proba(){
	char ulaz[1000], znak;
	int n;
	gets_s(ulaz);
	printf("%s", ulaz);
	printf("Ucitaj indeks i znak koje zelis zamijeniti.\n");
	scanf_s("%d %c", &n, &znak);

	ulaz[n] = znak;
	printf("%s", ulaz);
	
	
}
void mi2012_1(){
	int i, duljina = 0, indeks;
	char znak = '\0';
	char polje[1001];
	/*Ucitaj pocetni niz*/
	gets_s(polje);

	/*Izracunaj duljinu pocetnog niza*/
	while (polje[duljina] != '\0'){
		duljina++;
	}
	/*Ispisi niz*/
	printf("Trenutni niz: %s\n", polje);
	/*Dok je duljina niza manja od maksimalne...*/
	while (duljina < 1000){
		/*Ucitaj par "pozicija, znak"*/
		printf("Unesite par pozicija, znak:\n");
		scanf_s("%d %c", &indeks, &znak);
		/*Provjera je li zadana pozicija unutar trenutnog niza*/
		if (indeks >= duljina){
			/*Pozicija je izvan trenutnog niza*/
			break;
		}
		/*Premjesti znakove od kraja niza do znaka na
		poziciji "pozicija" jedno mjesto unatrag*/
		for (i = duljina; i >= indeks; i--){
			polje[i + 1] = polje[i];
		}
		/*Umetni zadani znak na zadanu poziciju*/
		polje[indeks] = znak;
		/*Uvecaj duljinu za 1*/
		duljina++;
		/*Ispisi niz*/
		printf("Trenutni niz: %s\n", polje);
	}
		
}
void niz_10() {
	int i;
	float broj, suma=0, sredina;
	float niz[20];
	for (i = 1; i <= 10; i++){
		printf("Unesite %d. broj:", i);
		scanf_s("%f \n", &niz[i]);
		suma = suma + niz[i];
	}
	sredina = suma / 10;
	printf("Aritmeticka sredina niza je: %f\n", sredina);
	printf("%f", niz[0]);
	

}
void niz11(){
	int polje[20];
	int x;
	printf("%d", polje[2]);
	for (int i = 1; i <= 10; i++){
		printf("%d\n", polje[i]);
	}
}
void prosti_broj(){

	int i, broj, prost = 1, brojac = 2;
	float rez;
	printf("Upisite prirodan broj!\n");
	scanf_s("%d", &broj);
	
	for (i = 2; i <= broj - 1; i++){
		if (broj % i == 0){
			prost = 0;
			brojac = brojac + 1;
			break;
		}
				
	}
	/*Broj je prost*/
	if (prost)
		printf("Broj %d je prost!", broj);					
		
	/*Broj nije prost*/
	else {
			printf("Broj %d nije prost!\n", broj); 
			if (broj % 2 == 0){ 
			printf("Broj je djeljiv s 2\n"); 
			printf("A rezultat je: %d", broj/2);
			}
			
			else	if (brojac != 2){
					printf("Broj je djeljiv s %d\n", brojac);
					rez = broj / brojac;
					printf("A rezultat je: %f", rez);
				}
		}

}
void switch_(){
	char c;
	scanf_s("%c", &c);
	switch (c){
	case 'A': 
		printf("c = 'A'\n");
		
	case 'B': 
		printf("c = 'B'\n");
	default: 
		printf("pogreska");
	}
}
void switch_2(){
	int b;
	printf("Upisi ocjenu.\n");
	while (1){
	scanf_s("%d", &b);
		
		switch (b){
		case 1: {
					printf(" Ocjena nedovoljan.");
					break;
		}
		case 2: {
					printf("Ocjena dovoljan.");
					break;
		}
		case 3: {
					printf("Ocjena dobar.");
					break;
		}
		case 4: {
					printf("Ocjena vrlo dobar.");
					break;
		}
		case 5: {
					printf("Ocjena odlican.");
					break;
		}
		default: {
					 printf("Uneslli ste nepostojecu ocjenu");
		}

		}
	}
}
void aritmeticka_sredina(){
	int polje[50];
	int i;
	float prosjek = 0;
	int n;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++){
		scanf_s("%d", &polje[i]);
		prosjek = prosjek + polje[i];
	}
	prosjek = prosjek / n;
	for (i = 0; i < n; i++){
		if (polje[i] < prosjek){
			printf("%d broj je manji od prosjeka %f \n", polje[i], prosjek);
		}
		else {
			printf("%d broj je veci ili jednak od prosjeka %f \n", polje[i], prosjek);
		}

	}
}
void prvimi(){
	int n, i = 0, masa = 0;
	int x[1000];
	int m[1000];
	float xt = 0;
	printf("Ucitati prirodni broj n");
	scanf_s("%d", &n);
	while (n > 0){
		scanf_s("%d", &x[i]);
		scanf_s("%d", &m[i]);
		if (m[i] >= 0){
			n--;
			xt += x[i] * m[i];
			masa += m[i];
			i++;
			
		}

	}
	xt /= masa;
	printf("%f", xt);

}
void broj_znamenaka(){
	int broj[10], brojzn1=0, i, j;
	int brojzn[10];
	printf("Ucitaj 5 brojeva");
	for (i = 0; i < 5; i++){
		scanf_s("%d", &broj[i]);
		while ((broj[i] / 10) != 0){
			for (j = 0; j < 5; j++){
				brojzn[j] = brojzn1 + 1;
			}
		}
	}
	for (i = 0; i < 5; i++){
		printf("Broj %d ima %d", broj[i], brojzn[i]);

	}
}
void polje2(){
	int n, i;
	int broj[1000], prosjek=0;
	printf("Upisite pozitivan cijeli broj:\n");
	scanf_s("%d", &n);
	for (i = 0; i < n ; i++){
		printf("Upisite %d. broj:", i+1);
		scanf_s("%d", &broj[i]);
		prosjek = prosjek + broj[i];
	}
	prosjek = prosjek / n;
	for (i = 0; i < n; i++){
		if (broj[i] < prosjek){
			printf("broj %d: je < od prosjeka\n", broj[i]);
		}
		else{
			printf("broj %d: je >= od prosjeka\n", broj[i]);
		}

	}
}
void niz(){
	int n, i;
	int k[100];
	int suma = 0, brojac = 0;
	float sredina;
	do{
		printf("Unesite broj clanova polja: \n");
		scanf_s("%d", &n);
	} while (n < 1 || n > 100);
	printf("Unesite clanove polja: \n");
	for (i = 0; i < n; i++){
		scanf_s("%d", &k[i]);
		if (k[i] != 0){
			suma = suma + k[i];
				brojac = brojac + 1;
		}
	}
	sredina = suma / brojac;
	for (i = 0; i < n; i++){
		printf("k(%3d) %3d\n ", i, k[i]);

	}
	printf("Aritmeticka sredina = %f\n", sredina);
}
void niz10(){
	int i;
	int niz[10];
	float arit = 0;
	for (i = 0; i < 10; i++){
		printf("Unesite %d. broj:", i+1);
		scanf_s("%d", &niz[i]);
		arit = arit + niz[i];
	}
	
	arit = arit / 10;
	printf("Aritmeticka sredina je %f\n", arit);
	for (i = 0; i < 10; i++){
		if (niz[i] < arit){
			printf("%5d je manji od aritmeticke sredine \n", niz[i]);
		}
	}
	for (i = 0; i < 10; i++){
		if (niz[i] > arit){
			printf("%5d je veci od aritmeticke sredine \n", niz[i]);

		}
	}


}
void najveci_element(){
	int i;
	float najveci = 0, rez;
	float niz[10];
	for (i = 0; i < 10; i++){
		printf("polje[%d] = ", i);
		scanf_s("%f", &niz[i]);
		if (i == 0){
			najveci = niz[i];
		}
		if (najveci < niz[i]){
			najveci = niz[i];
		}

	}
	printf("Najveci element polja je: %f\n\n", najveci);
	for (i = 0; i < 10; i++){
		rez = niz[i] / najveci;
		printf("polje[%d] %f \n", i, rez);
	}
}
void student(){

	int i = 0, suma = 0;
	char ime[21];
	printf("Upisite ime studenta: ");
	gets_s(ime);
	while (ime[i] != '\0'){
		suma = suma + ime[i];
		i = i + 1;
	}

	printf("%s %d", ime, suma);

}
void fora(){

	printf("fora");

}
void niz2(){
	int i = 0, suma = 0;
	char ime[21];
	gets_s(ime);
	printf("%s", ime);
	for (i = 0; ime[i] != '\0'; i++){
		suma = suma + ime[i];
	}
	printf("%d", suma);
}

void proba(){
	int x[3][2];
	int rez;
	
	sizeof (x);
	rez = sizeof (x);
	printf("%d", rez);
}
void matrica2(){
	int polje[3][3] = { { 1, 2, 3 },
	{ 4, 5, 6 },
	{ 7, 8, 9 } };
									

	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++)
		{
			printf("%d", polje[i][j]);
		}
	};
}
void Zbrajanje(){
	int a, b, rez;
	printf("Upisi dva broja koja zelis zbrojiti\n");
	printf("1.");
		scanf_s("%d", &a);
		printf("2.", &b);
		scanf_s("%d", &b);
		rez = a + b;
		printf("rezultat: %d", rez);
}
void smece(){
	int polje[10], i;
	for (i = 0; i < 10; i++){
		printf("%d\n", &polje[i]);
	}
}
void brzi(){
	int i, n, prosjek = 0;
	int broj[15];
	printf("Ucitaj prirodni broj n: ");
	scanf_s("%d", &n);
	for (i = 0; i < n; i++){
		printf("Upisi %d broj: ", i + 1);
		scanf_s("%d", &broj[i]);
		prosjek = prosjek + broj[i];
	}
	for (i = 0; i < n; i++){
		if (broj[i] < prosjek){
			printf("Broj %d je < od prosjeka \n", broj[i]);
		}
		else {
			printf("Broj %d je >= od prosjeka \n", broj[i]);
		}

	}



}
void ucitaj(){
	int i, n, raz = 0;
	int k[1000];
	float arit = 0, rez;
	do{
		printf("Unesi broj clanova polja");
		scanf_s("%d", &n);
	} while ((n < 1) || (n > 100));
	printf("Unesite clanove polja: ");
	for (i = 0; i < n; i++){
		scanf_s("%d", &k[i]);
		if (k[i] != 0){
			raz += 1;
			arit += k[i];
		}
	}
	rez = arit / raz;
	for (i = 0; i < n; i++){
		printf("k(%d) = %d \n", i, k[i]);
	}
	
	if (raz !=0){
		printf("Aritmeticka sredina = %f", rez);
	}
	else {
		printf("Aritmeticka sredina = %f", arit);
	}
}
void ucitati(){
	int broj, i;
	int brojac[10] = { 0 };
	do{	
		printf("Unesite broj u intervalu [0, 9] ");
		scanf_s("%d", &broj);
		if ((broj >= 0) && (broj <= 9)){
			brojac[broj] += 1;
		}
	} while ((broj >= 0) && (broj <= 9));
	for (i = 0; i < 10; i++){
		if (brojac[i] > 0){
			printf("Broj %d se pojavio %d \n", i, brojac[i]);
		}
	}
		

}
void size(){
	int polje[2][3];
	int rez;
	polje[2][3] = 0;
	rez = sizeof(polje[2][3]);
	printf("%d", rez);
}
void matrica(){

	int m, n, i, j;
	int polje[5][10];
	do{
		scanf_s("%d %d", &m, &n);
	} while (m > 5 || m < 1 || n < 1 || n > 10);
	

	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			scanf_s("%d", &polje[i][j]);
		}
	}
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("%5d", polje[i][j]);
		}
		printf("\n");
	}
}
void matrica3(){
	int m, max, n, i, j;
	int	poz = 0;
	int polje[100][10];
	int lok[100][10];
	do{
		scanf_s("%d %d", &m, &n);
	} while (m > 100 || m < 1 || n > 10 || n < 1);
	printf("Polje[%d][%d] \n", m, n);
	printf("Upisi clanove polja \n");
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			scanf_s("%d", &polje[i][j]);
		}
	}
	
	for (i = 0; i < m; i++){
		max = -10000;
		for (j = 0; j < n; j++){
			if (polje[i][j] > max){
				max = polje[i][j];
				poz = j;
			}
		}
		printf("a(%d, %d) %d\n", i+1 , poz+1, max);

	}
	



}
void dijagonala(){
	int matrica[10][10], max=0;
	int i, j;
	printf("Upisi clanove matrice 10x10. \n");
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			scanf_s("%d", &matrica[i][j]);
			matrica[0][0] = max;
		}
	}
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (matrica[i][j + 1] > max){
				matrica[i][j + 1] = max;

			}

		}
	}
}
void matrica4(){
	int i, j, max, lokacija, max2, lokacija2;
	int polje[3][3];
	printf("Unesi clanove 3x3 matrice \n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			scanf_s("%d", &polje[i][j]);

		}
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%4d", polje[i][j]);

		}
		printf("\n");
	}
	//najveca vrijednost u glavnoj dijagonali//
	max = polje[0][0];
	lokacija = 0;
	for (i = 0; i < 3; i++){
		if (polje[i][i] > max){
			max = polje[i][i];
			lokacija = i;
		}
		printf("polje[%d][%d] = %d \n", i, i, max);
	}
	printf("Najveci element u GD  %d \n", max);

	printf("[%d][%d] \n", lokacija, lokacija);


	//najveca vrijednost u sporednoj dijagonali//
	max2 = polje[i][j];
	for (i = 0; i < 3; i++){
		if (polje[i][2 - i] > max2){
			max2 = polje[i][2 - i];
			lokacija2 = i;
		}
	}
	printf("Najveci element u SD %d \n", max2);
	printf("Na lokaciji [%d][%d]", lokacija2, 2-lokacija2);
}
void suma_matrice(){
	int i, j, minsum, maxprod;
	int suma[10] = {0};
	int prod[10] = {1,1,1,1,1,1,1,1,1,1};
	int polje[10][10];
	int minsumind = 0;
	int maxprodind = 0;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			scanf_s("%d", &polje[i][j]);
		}
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			printf("%4d", polje[i][j]);
		}
		printf("\n");
	}
	
	for (j = 0; j < 3; j++){
		for (i = 0; i < 3; i++){
			suma[j] = suma[j] + polje[i][j];
		}
	}
	minsum = suma[0];
	minsumind = 1;
	maxprod = prod[0];
	maxprodind = 1;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 3; j++){
			prod[i] = prod[i] * polje[i][j];
		}
	}
	printf("%d \n", minsumind);
	for (i = 0; i < 3; i++){
		printf("Produkt %d. stupca %d \n", i+1, prod[i]);
		if (prod[i] > maxprod){
			maxprod = prod[i];
			maxprodind = i+1;
		}
		
	}
	for (j = 0; j < 3; j++){
			printf("Suma %d. stupca %d \n", j+1 ,suma[j]);
			if (suma[j] < minsum){
				minsum = suma[j];
				printf("%d \n", minsumind);
				minsumind = j+1;
				printf("%d \n", minsumind);
			}
	}

	printf("Najmanja suma je %d i nalazi se u %d stupcu.\n", minsum, minsumind);
	printf("Najveci produkt je %d i nalazi se u %d retku.\n", maxprod, maxprodind);
}

void adresa(){
	int i;
	float polje[10], *p;
	p = &polje[0];
	printf("Upisite elemente polja");
	for (i = 0; i < 10; i++){
		scanf_s("%f", p + i);

	}
	for (i = 0; i < 10; i++){
		printf("%f\n", *(p + i));
	}
}
void adresa2(){
	float polje[10][5], *p = &polje[0][0];
	int mr, ms, i, j;
	float maxred[10]={0};
	printf("Ucitaj broj redaka mr i broj stupaca ms\n");
	do{
		scanf_s("%d %d", &mr, &ms);
	} while (mr < 1 || mr > 10 || ms > 5 || ms < 1);

	for (i = 0; i < mr; i++){
		for (j = 0; j < ms; j++){
			printf("Unesi polje[%d][%d]: ", i, j);
			scanf_s("%f", p + i*ms + j);

		}
	}
	for (i = 0; i < mr; i++){
		for (j = 0; j < ms; j++){
			printf("%2.1f   ", *(p + i*ms + j));
		}
		printf("\n");
	}
	for (i = 0; i < mr; i++){
		for (j = 0; j < ms; j++){
				if (maxred[i] < *(p + i*ms + j)){
					maxred[i] = *(p + i*ms + j);
			}
		}
	}
	for (i = 0; i < mr; i++){
		printf("maxred[%d] = %f \n", i, maxred[i]);
	}
}
double fakt(int n){
	int i;
	double umnozak = 1.;
	for (i = 2; i <= n; i++){
		umnozak = umnozak * i;
	}
	return umnozak;
}
void povrh(){

	int m, n;
	double rez;
	printf("Ucitaj m i n: \n");
	scanf_s("%d %d", &m, &n);
	rez = fakt(m) / (fakt(n)*fakt(m - n));
	printf("%f", rez);
} 
float aritmeticka(float a, float b, float c){
	float rez;
	rez = (a + b + c)/3.;
	return rez;
}
void ritmeticka(){
	float a, b, c;
	printf("Unesi tri realna broja :\n");
	scanf_s("%f %f %f", &a, &b, &c);
	printf("%f", aritmeticka(a, b, c));	



}
double sinus(double x, int n){
	int i;
	double rez, suma=0;
	for (i = 1; i <= n; i++){
		rez = pow(double(-1), double(i + 1)) * (pow(x, 2 * i - 1)) / fakt(2 * i - 1);
		suma += rez;
	}
	return suma;

}
void funkcija(){
	double x;
	int n;
	double rez;
	printf("Unesi x i n: \n");
	scanf_s("%lf %d", &x, &n);
	rez = sinus(x, n);
	printf("%f", rez);


}
void suma_prod(int a, int b){
	int suma, prod;
	suma = a + b;
	printf("%d\n", suma);
	prod = a * b;
	printf("%d", prod);



}
void udvostruci2(int *x){
	*x = *x + 1000;
}
void sumaProd2(int a, int b, int *suma, int *prod){
	*suma = a + b;
	printf("%d", *suma);
	*prod = a*b;
	printf("%d", *prod);
	/*int main(void){
	int a = 2, b = 3;
	int suma, prod;
	sumaProd2(a, b, &suma, &prod);
	printf("%d %d", suma, prod);
	scanf_s("\n");*/
}
int zbroj(int a, int b){
	static int brojac = 0;
	
	brojac++;
	if (brojac <= 3)
		return a + b;
	

	return 0;
		
	

}
void zamjena(short *a, short *b){
	short pom;
	pom = *a;
	*a = *b;
	*b = pom;
	return;
}
void puniFib(int niz[], int n){
	int i;
	niz[0] = niz[1] = 1;
	for (i = 2; i <= n; i++){
		niz[i] = niz[i - 2] + niz[i - 1];
	}
	

}
void fibonaccif(){
	int polje[30], n;
	printf("Unesi broj n iz intervala [2, 30] \n");
	do{
		scanf_s("%d", &n);
	} while (n < 2 || n > 30);
	puniFib(&polje[0], n);
	for (int i = 0; i <= n; i++){
		printf("%d ", polje[i]);
	}




}
int broji(int n, float polje[], float dg, float gg){
	int brojac = 0, i;
		if (dg < gg){
			for (i = 0; i < n; i++){
				if (polje[i] > dg && polje[i] < gg){
					brojac++;
				}
			}
			return brojac;
		}
		
		else {
			return -1;
		}
		
}
void funkcijaDGGG(){
	int i, n, ibr;
	float polje[100];
	float dg, gg;
	
	do{
		printf("Ucitaj velicinu polja. [1,100] \n");
		scanf_s("%d", &n);
	} while (n < 1 || n > 100);

	printf("Ucitaj clanove polja: \n");
	for (i = 0; i < n; i++){
		scanf_s("%f", &polje[i]);
	}

	do{
		printf("Ucitaj DG i GG: \n");
		scanf_s("%f %f", &dg, &gg);
		ibr = broji(n, polje, dg, gg);
			if (ibr == -1){
			printf("Neispravno zadane granice. \n");
			}
			else {
				printf("U polju je pronadjeno %d clanova"
						" vecih od %f i manjih od %f \n" , ibr, dg, gg);
			}
	} while (ibr != -1);
	


}
int zbraja(int *p, int br){
	int i, suma=0;
	for (i = 0; i < br; i++){
		suma *= *(p+i);
	}
	return suma;
}
void puniFib2(int polje[], int n){
	int i;
	polje[0] = polje[1] = 1;
	for (i = 2; i < n; i++){
		polje[i] = polje[i - 2] + polje[i - 1];
	}
	for (i = 0; i < n; i++){
		printf("%d ", polje[i]);
	}

}
void zadatak1000(){
	int n;
	int polje[30];
	printf("Unesi broj n. [2, 30]\n");
	do{
		scanf_s("%d", &n);
	} while (n<2 || n> 30);
	puniFib2(&polje[0], n);
}
void zadatak(){
	int i, n;
	int polje[100];
	printf("Unesi broj clanova polja.\n");
	scanf_s("%d", &n);
	printf("Unesi clanove polja");
	for (i = 0; i < n; i++){
		scanf_s("%d", &polje[i]);
	}
	printf("%d", zbraja(&polje[0], n));
}
int pronalazi(float dg, float gg, float *p, int n){
	int i, brojac = 0;
	if (dg < gg){
		for (i = 0; i < n; i++){
			if (*(p + i) > dg && *(p + i) < gg){
				brojac++;
			}
		}
		return brojac;
	}

	else {
		return -1;
	}
}
void ispisNizZnakova(char niz[]){
	int i;
	for (i = 0; i < strlen(niz); i++){
			niz[i] = toupper(niz[i]);
		
	}


}
void zadatak1002(){
	char niz[100];
	printf("Unesi niz\n");
	gets_s(niz);
	ispisNizZnakova(&niz[0]);
	for (int i = 0; i < strlen(niz); i++){
		printf("%c", niz[i]);
	}
}
void zadatak1001(){
	int i, n;
	float polje[100], dg, gg;
	printf("Ucitaj broj n clanova polja, iz intervala [1,100]\n");
	do{
		scanf_s("%d", &n);
	} while (n < 1 || n > 100);
	printf("Unesi %d clanova polja \n", n);
	for (i = 0; i < n; i++){
		scanf_s("%f", &polje[i]);
	}
	printf("Unesi granice dg i gg\n");
	do{
		scanf_s("%f %f", &dg, &gg);
		printf("%d ", pronalazi(dg, gg, &polje[0], n));
	} while (dg >= gg);


}
int strcmp2(const char *s1, const char *s2){
	int i = 0;
	while (*s1 == *s2 && *s1){
		++s1;
		++s2;
	}
	return *s1 - *s2;
}
	
void zadatak1003(){
	int l;
	char s1[20], s2[20];
	gets_s(s1);
	gets_s(s2);
	printf("%d ", strcmp2(&s1[0], &s2[0]));
	
}
int rekurzija(int a){
	return 6;
}
int zbrojiDvodimenzijsko(int *p, int brred, int brstup, int maxstup){
	int i, j, suma=0;
	for (i = 0; i < brred; i++){
		for (j = 0; j < brstup; j++){
			suma += *(p + maxstup*i + j);
		}
	}

	return suma;
}

void dvodimenzijskoPolje(){
	int polje[50][100];
	int i,j, m, n;
	scanf_s("%d", &m);
	scanf_s("%d", &n);
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			scanf_s("%d", &polje[i][j]);
		}
	}
	printf("%d", zbrojiDvodimenzijsko(&polje[0][0], m, n, 100));

}
void formiranaJedMatrica(int *p, int n, int maxstup){
	int i, j, polje[10][10] = { 0 };
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (i == j){
				*(p + maxstup*i + j) = 1;
			}
			else{
				*(p + maxstup*i + j) = 0;
			}
		}
	}
}
void jedinicna_matrica(){
	int i,j, n, polje[10][10];
	printf("Ucitaj N.\n");
	scanf_s("%d", &n);
	formiranaJedMatrica(&polje[0][0], n, 10);
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			printf("%2d", polje[i][j]);
		}
		printf("\n");
	}

}
void sumaredova(float *m, float*p, int brred, int brstup, int maxstup){
	int i, j;
	for (i = 0; i < brred; i++){
		for (j = 0; j < brstup; j++){
			*(p + i) += *(m + i*maxstup + j);
		}
	}
}
void macro(){
#define VECI(a,b) ((a) > (b) ? (a) : (b))
#define PI 3.14159
#define PROD(a, b) ((a)*(b))
#define NEG(a) (-(a))
#define PI2 (3.14159*3.14159)
	float j, k;
	scanf_s("%f %f", &j, &k);
	printf("%f\n", VECI(j, k));
	printf("%f\n", PI);
	printf("%f\n", PROD(j, k));
	printf("%2.1f\n", NEG(j));
	printf("%f\n", 1 / PI2);
}
void sume_elemenata(){
	int i, j, m, n;
	float matrica[10][15];
	float polje[10] = {0};
	printf("Ucitaj m i n.\n");
	scanf_s("%d %d", &m, &n);
	printf("Ucitaj elemente matrice.");
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			scanf_s("%f", &matrica[i][j]);
		}
	}
	sumaredova(&matrica[0][0], &polje[0], m, n, 15);
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("%2f", matrica[i][j]);
		}
		printf("            %f", polje[i]);
		printf("\n");
	}
}
void strukturaosobe(){
	int i = 0;
	typedef struct {
		char jmbg[13 + 1];
		char prezime[40 + 1];
		char ime[40 + 1];
		int visina;
		float tezina;
	}osoba;
	osoba o1, o2, o3;
	gets_s(o1.jmbg);
	while (o1.jmbg[i] != '\0'){
		printf("%c", o1.jmbg[i]);
		i++;
	}
	}
void strukturatocke(){
	float udaljenost;
	typedef struct{
		int x;
		int y;
	}tocka;
	tocka t1, t2;
	printf("Ucitaj koordinate tocke t1 i tocke t2.\n");
	scanf_s("%d %d %d %d", &t1.x, &t1.y, &t2.x, &t2.y);
	udaljenost = sqrt(pow((t2.x - t1.x), 2.) + pow((t2.y - t1.y), 2.));
	printf("Udaljenost izmedu tocaka je: %f", udaljenost);
}
void strukturadatum(){
	typedef struct{
		int dan;
		int mjesec;
		int godina;
	} datum;
	datum d1, d2, d3;
	printf("Ucitaj dan, mjesec i godinu. \n");
	scanf_s("%d %d %d", &d1.dan, &d1.mjesec, &d1.godina);
	printf("Dan: %d.\n", d1.dan);
	printf("Mjesec: %d.\n", d1.mjesec);
	printf("Godina: %d.\n", d1.godina);
}
void strukturastudent(){
	typedef struct {
		char jmbg[13 + 1];
		char prezime[40 + 1];
		char ime[40 + 1];
		int visina;
		float tezina;
	} osoba;
	typedef struct {
		int maticni_broj;
		 osoba osobni_podaci;
		 osoba otac;
		 osoba majka;
	} student;
	student Pero;
	scanf_s("%d", &Pero.osobni_podaci.visina);
	Pero.osobni_podaci.ime[0]=7;
	printf("%c", Pero.osobni_podaci.ime[0]);
}
int *nadji (int niz[], int n){
	int i;
	for (i = 0; i < n; i++){
		if (niz[i] < 0){
			return &niz[i];
		}
		return NULL;
	}
}
void nulll(){
	int polje[3] = { 0 };
	int *p;
	int i;
	for (i = 0; i < 3; i++){
		scanf_s("%d", &polje[i]);
	}
	p = nadji(polje, 3);
	if (p == NULL){
		printf("Nema takvog\n");
	}
	else{
		printf("Manji od nule je: %p %p\n", *p, p);
	}
}
char *pronalaziZ (char *niz, char Z){
	int i = 0;
	while (*(niz+i) != '\0'){
		if (*(niz+i) == Z){
			return niz;
		}

		else{
			niz++;
			return NULL;
		}


	}
	i++;
}

char *trazi(char *niz, char c) {
	while (*niz != '\0'){
		if (*niz == c){
			return niz;
		}
		else{
			niz++;
		}
}
		return NULL;

	
}

void Z(){
	int n;
	char niz[101], *p;
	gets_s(niz);
	n = strlen(niz);
	p = trazi(&niz[0], 'Z');
	printf("%s\n ", niz);
	if (p == NULL){
		printf("U nizu nema znaka Z");
	}
	else{
		printf("%s", p);

	}

}
int simulirajIgru(int brojigraca, int zadBrojbod, int *bodovi){
	int i;
	while (1){
		for (i = 0; i < brojigraca; i++){
			*(bodovi + i) += rand() % 6 + 1;
			if (*(bodovi + i) >= zadBrojbod){
				return i + 1;

			}
		}
	}

}


void igra(){
	int i, j,brojigraca, pobjednik;
	int bodovi[10]{0};
	srand((unsigned)time(NULL));
	do{
		scanf("%d", &brojigraca);
	} while (brojigraca<2 || brojigraca >10);
		printf("Pobjednik  Bodovi igraca\n");
		for (i = 0; i < 10; i++){
			pobjednik = simulirajIgru(brojigraca, 70, &bodovi[0]);
			printf("Igrac %2d    ", pobjednik);
			for (j = 0; j < brojigraca; j++){
				printf("%d, ", bodovi[j]);
			}
			printf("\n");
			for (j = 0; j < brojigraca; j++){
				*(bodovi + j) = 0;
			}
		}
}
void medju(){
	char niz[10];
	char niz2[10];
	gets(niz);
	strcpy(niz2, niz);
	puts(niz2);
}
void broj(){
	int postoji = 0, brojac = 0, broj = 0, i=0, prod = 1;
	char niz[10];
	gets(niz);
	while (niz[i] != '\0'){
		if (niz[i] < 48 || niz[i] > 60){
			postoji = 1;
		}
		//niz[i] = niz[i] - 48;
		i++;
		prod *= 10;
	}
	i = 0;
	prod /= 10;
	if (postoji == 0){
		while (niz[i] != '\0'){
			//niz[i] = niz[i] * prod;
			broj += (niz[i] - 48) * prod;
			prod /= 10;
			i++;
		}
		printf("%d", broj);
	}
	else{
		printf("Dopustene samo dekadske znamenke");
	}

}
void trecimedju(){
	int m, n, min, matrica[100][200], i, j, suma = 0, suma2 = 0;
	do{
		scanf("%d", &m);
		scanf("%d", &n);
	} while (m<1 || m>100 || n > 200 || n < 1);


	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			scanf("%d", &matrica[i][j]);
		}
	}
	for (i = 0; i < m; i++){
		min = 0;
		suma += matrica[i][0];
	}
	printf("Suma prvog stupca %d\n", suma);
	for (j = 1; j < n; j++){
		for (i = 0; i < m; i++){
			suma2 += matrica[i][j];
			if (suma2 < suma){
				min = j;
				suma = suma2;

			}
		}
		suma2 = 0;
	}
	for (i = 0; i < m; i++){
		printf("%6d\n", matrica[i][min]);
	}


}
void proba2(){
	int i, j;
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (i == j){
				printf("%2d", 1);
			}
			else {
				printf(" 0");
			}
		}
		printf("\n");
	}
}
void odrediExt(char *naziv, char *pom){
	int i=0, brojac=0;
	char povratni[100];
	char *x;
	while (*(pom + i) != '\0'){
		*(pom + i) = NULL;
		i++;
	}
	
	x = strrchr(naziv, '.');
	if (x == NULL){
		printf("Datoteka nema ekstenziju");
	}
	else {
		
		do{
			*pom = *(x+1);
			pom++;
			x++;
			brojac++;
		} while (*x != '\0');
		*(pom + brojac + 1) = '\0';
	}
		

	
}
void kopiranje(){
	char naziv[101];
	char pom[101];
	gets(naziv);
	strcpy(pom, naziv);
	odrediExt(&naziv[0], &pom[0]);
	puts(pom);
}
int zamijeniZnamenkom(char *niz, char z){
	while (niz = strchr(niz, z)){
		*niz = rand() % 10 + 48;
	}
	return 1;
}
void z(){
	char niz[10];
	srand((unsigned)time(NULL));
	gets(niz);
	if (zamijeniZnamenkom(&niz[0], 'z') == 1){
		puts(niz);
	
	}
	
}
void makro(){
	int rez;
	rez = MACRO(1 + 1, 2 * 2, 2 / 2);
	printf("%d", rez);
}
void real(){
	int i;
	float polje[10] = {0};
	for (i = 0; i < 10; i++){
		printf("%3.1f \n", polje[i]);
	}
}
void generirajSifru(int brSlova, int brZnamenki, char *sifra){
	int i = 0;
	for (i = 0; i < brSlova; i++){
		*(sifra + i) = rand() % ('Z' - 'A' + 1) + 65;
	}
	for (i = brSlova; i < brZnamenki + brSlova; i++) {
		*(sifra + i) = rand() % ('9' - '0' + 1) + 48;
	}
}
void sifra(){
	int n, i, j;
	char sifra[20] = { 0 };
	scanf("%d", &n);
	srand((unsigned)time(NULL));
	for (i = 0; i <= n; i++){
		for (j = 0; j < 20; j++){
			*(sifra + j) = '\0';
		}
		generirajSifru(i, n - i, &sifra[0]);
		puts(sifra);
	}
}
void smanjiMatricu(int n, int *velika, int *mala, int *n2, int maxstup){
	int i, j, k = 0, l = 0, pom=0;
	for (i = 0; i < n; i++){
		for (j = 0; j < n; j++){
			if (i % 2 == 0 && j % 2 == 0){
				pom += *(velika + i*maxstup + j);
				pom += *(velika + i*maxstup + j + 1);
				pom += *(velika + (i + 1)*maxstup + j);
				pom += *(velika + (i + 1)*maxstup + j + 1);
				pom /= 4;
				*(mala + k*(maxstup/2) + l) = pom;
				l++;
				pom = 0;
			}
		}
		l = 0;
		if (i % 2 == 1) {
			k++;
		}
		
	}
	*n2 = n / 2;
}
void Sazmi(){

	int i, j, n, n2 = 0;
	int mat1[10][10], mat2[5][5];
	do {
		printf("Unesi n:");
		scanf("%d", &n);
	} while (n<0 || n>100 || n % 2);
	for (i = 0; i<n; i++){
		for (j = 0; j<n; j++) {
			printf("mat[%d][%d] = ", i, j);
			scanf("%d", &mat1[i][j]);
		}
	}
	smanjiMatricu(n, &mat1[0][0], &mat2[0][0], &n2, 10);

	for (i = 0; i<n2; i++){
		for (j = 0; j<n2; j++) {
			printf("%d ", mat2[i][j]);
		}
		printf("\n");
	}
}
float aritSred(float x, float y, float z){
	float arSr;
	arSr = (x + y + z) / 3;
	return arSr;
}
int komper(char *s1, char *s2){
	int i = 0;
	while (*(s1 + i) == *(s2 + i) && *(s1 + i)){
		i++;
	}
	return *(s1 + i) - *(s2 + i);
}
void punijednodimenzijsko(float *polje, float *jedno, int m, int n, int maxstup){
	int i, j;
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			*(jedno + i) += *(polje + i*maxstup + j);
		}
	}
}

char *nadji(char *niz, int n, char z){
	int i;
	for (i = 0; i < n; i++){
		if (*(niz + i) == 'Z'){
			return (niz + i);
		}
	}
	return NULL;
}
int bacanjeKocke(){
	int x;
	x = rand() % 6 + 1;
	return x;
}
int main(){
	while (1){
		printf("Beno \n");	
	}
	scanf("\n");
	return 0;
}
