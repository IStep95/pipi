#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define PI  3.14159

int zbroj_prvih_n_brojeva(int n) {
	int zbroj = 0;

	for (int i = 0; i <= n; i++) {
		zbroj += i;
	}

	return zbroj;
}

void zadatak2() {
	int input, first, last;
	printf("Ucitajte dvoznamenkasti broj \n");
	scanf("%d", &input);
	if (input < 0) {
		input = input * (-1);
	}
	first = input;
	while (first > 9){
		printf("Trenutni: %d\n", first);
		first = first / 10;
	}
	printf("Prva znamenka je: %d \n", first);
	if (first != 5) {
		printf("%d\n", first);
	}
	else {
		last = input % 10;
		printf("%d\n", last);
	}

}
void zadatak3(){
	int input, original;
	scanf("%d", &input);
	original = input; 
	if (input < 0) {
		input = input * (-1);
	}
	input = input / 10;
	input = input % 10;
	printf("Srednja znamenka broja %d je %d. \n", original, input);





}
void zadatak4() {
	int broj;
	scanf("%d", &broj);
	if (broj <= 0) {
		printf("Neispravan broj");
	}
	else {
		if (broj % 2 == 0){
			printf("Broj %d je paran broj. \n", broj);
		}
		else {
			printf("Broj %d je neparan broj. \n", broj);
		}
	}
	


}
void zadatak5(){
	int broj, first, middle, last, umnozak;
	printf("Upisi troznamenkasti broj \n");
	scanf("%d", &broj);
	first = broj / 100;
	middle = broj / 10;
	middle = middle % 10;
	last = broj % 10;
	printf("%d %d %d", first, middle, last);
	umnozak = first * middle * last;
	printf("Umnozak znamenaka broja %d je %d.", broj, umnozak);
}
void zadatak6(){
	int a, b, suma1, suma2;
	printf(" Ucitaj dva dvoznamenkasta broja \n");
	scanf("%d %d", &a, &b);
	suma1 = (a / 10) + (a % 10);
	suma2 = (b / 10) + (b % 10);
	if (suma1 > suma2) {
		printf("Broj %d ima vecu sumu znamenaka od broja %d.", a, b);
	}
	else {
		printf("Broj %d ima vecu sumu znamenaka od broja %d.", b, a);
	}
}
void zadatak7(){
	int x, o;
	printf("Upisi cijeli broj.");
	scanf("%d", &x);
	o = x;
	if (x < 0) {
		x = x * (-1);
	}
	if ((x % 2 == 0) && (x % 3 == 0)) {
		printf("Broj %d je djeljiv sa 6. \n", o);
	} 
	else if ((x % 2 != 0) && (x % 3 != 0)){
		printf("Broj %d nije djeljiv sa 6 jer nije djeljiv ni s 2 ni s 3. \n", o);
	}
	else if (x % 2 != 0){
		printf("Broj %d nije djeljiv sa 6 jer nije djeljiv s 2. \n", o);
	}
	else if (x % 3 != 0){
		printf("Broj %d nije djeljiv sa 6 jer nije djeljiv s 3. \n ", o);
	}
	



}
void zadatak8(){
	int broj, obrnuti_broj, prva, druga, treca;
	printf("Upisi troznamenkasti broj. \n");
	scanf("%d", &broj);
	prva = broj / 100;
	druga = broj / 10 % 10;
	treca = broj % 10;
	printf("Broj dobiven obrnutim poretkom broj %d\n%d%d%d", broj, treca, druga, prva);
}
void zadatak9(){

	int broj, zadnjaZnamenka;
	printf("Ucitaj prirodni broj \n");
	scanf("%d", &broj);
	zadnjaZnamenka = broj % 10;
	if ((broj % 3 == 0) && (zadnjaZnamenka == 8)){

		printf("Broj %d je djeljiv s 3 i zadnja znamenka mu je 8.", broj);
	}

	else if ( ((broj % 3) == 0) && (zadnjaZnamenka != 8)){
		printf("Broj %d je djeljiv s 3 i zadnja znamenka mu nije 8.", broj);
	}
	else if (((broj % 3) != 0) && (zadnjaZnamenka == 8)){
		printf("Broj %d nije djeljiv s 3 i zadnja znamenka mu je 8.", broj);
	}
	else {
		printf("Broj %d nije djeljiv s 3 i zadnja znamenka mu nije 8.", broj);

	}
}
void zadatak10(){

	int broj, suma, jedinica, desetica, stotica;
	printf("Upisi troznamenkasti Armstrongov broj. \n");
	scanf("%d", &broj);
	stotica = broj / 100;
	desetica = broj / 10 % 10;
	jedinica = broj % 10;
	suma = (stotica * stotica * stotica) + (desetica * desetica * desetica) + (jedinica * jedinica * jedinica);
	if (broj == suma) {
		printf("Broj %d je Armstrongov broj.", broj);
	}
	else {
		printf("Broj %d nije Armstrongov broj.", broj);
	}
}	
void zadatak12(){

	int broj1, broj2, rez, naredba;
	scanf("%d", &broj1);
	scanf("%d", &broj2);
	scanf("%d", &naredba);
	if (naredba == 1) {
		rez = broj1 + broj2;
	}
	else {
		if (broj1 < broj2) {
			rez = broj2 - broj1;
		}
		else {
			rez = broj1 - broj2;
		}
	}
	printf("%d", rez);
}
void zadatak31(){

	int broj1, broj2, suma;
	double aritmeticka_sredina, zbroj_reciprocnih;
	printf("Upisi 2 broja: \n");
	scanf("%d %d", &broj1, &broj2);
	suma = broj1 + broj2;
	zbroj_reciprocnih = 1 / (double)broj1 + 1 / (double)broj2;
	
	
	aritmeticka_sredina = suma / 2.;
	if (suma > 0){

		printf("Aritmeticka sredina brojeva %d i %d: %2.4f", broj1, broj2, aritmeticka_sredina);
	}
	else {
		printf("Izracunata vrijednost: %.4lf ", zbroj_reciprocnih);
	}

}
float sinx2(float x){
	float r;
	r = x - (x*x*x / 6) + (x*x*x*x*x / 120) - (x*x*x*x*x*x*x / 5040);
	return r;
}
void zadatak40(){
	float t = 3.14 / 100;
	for (int i = 0; i < 100; i++){
		printf("%10d %10f \n", (i+1), sinx2(i*t));
	}

}
void zadatak41(){
	float a, b, c, D, x1, x2, x1r, x2r, x1i, x2i;
	printf("Zadajte koeficijente kvadratne jednadzbe a, b i c");
	scanf("%f %f %f", &a, &b, &c);
	D = b*b - (4*a*c);
	if (D > 0){
		x1 = (-b + sqrt(D)) / (2 * a);
		x2 = (-b - sqrt(D)) / (2 * a);
		printf("%f %f", x1, x2);
	}
		else if (D==0){
		x1 = (-b) / (2 * a);
		x1 = x2;
		printf("%f %f", x1, x2);
		}
			else {
				D = -D;
				x1r = (-b) / (2 * a);
				x2r = (-b) / (2 * a);
				x1i = sqrt(D);
				x2i = -sqrt(D);
			}


	

}
void zadatak42(){
	float x,y,m,n, korijen;
	scanf("%f %f %f", &x, &m, &n);
	y = m / n;
	korijen = pow(x, y);
	printf("%f", korijen);

}
void zadatak43(){
	unsigned int i = 0x80000000, j;
	j = i << 1;
	printf("i=%u\nj=%u", i, j);

}
void zadatak44(){
	int broj, ostatak;
	printf("Upisite nenegativan cijeli broj\n");
	scanf("%d", &broj);
	printf("Upisali ste %d\n", broj);
	while(broj != 0){
		ostatak = broj % 2;
		printf("Ostatak je: %d\n", ostatak);
		broj = broj / 2;
	}

	
}
void zadatak45(){
	int broj, suma;
	suma = 0;
	while (broj != 0){
		suma = suma + broj;
		printf("%d", suma);
		scanf("%d", &broj);
	}
	

	


}
void zadatak46(){
	int broj, suma = 0;
	printf("Upisite broj: ");
	scanf("%d", &broj);
	while (broj != 0) {
		suma = suma + broj;
		printf("Upisite broj: ");
		scanf("%d", &broj);
	}
	printf("Suma=%d.\n", suma);
}
void niz(){
	printf("Unesite broj clanova polja:\n");
	int n, i;
	int k[100];
	do{
		scanf_s("%d", &n);
	} while ((n < 1) && (n > 100));

	printf("Unesite clanove polja: ");
	for (i = 0; i < n; i++){
		scanf_s("%d", &k[i]);

	}
	for (i = 0; i < n; i++){
		printf("k[%d], %d", i, k[i]);
	}

}
void Marta(){
	int  n;
	printf("Upisi 5\n");
	scanf("%d", &n);
	printf("Bravo Marta\n");

}
void kocka(int *p, int x){
	int i, j, broj;
	for (i = 0; i < x; i++){
		broj = rand() % 6 + 1;
		if (broj == 1){
			*p += 1;
		}
		else if (broj == 2){
			*(p + 1) += 1;
		}
		else if (broj == 3){
			*(p + 2) += 1;
		}
		else if (broj == 4){
			*(p + 3) += 1;
		}
		else if (broj == 5){
			*(p + 4) += 1;
		}
		else {
			*(p + 5) += 1;
		}
	}
	
	for (j = 0; j < 6; j++){
		printf("Broj %d bacanja : %d \n", j+1 ,*(p+j));
	}
}

void nasumicno(){
	int x;
	int b = 0;
	long int c = time(NULL);
	srand(c);
	for (int i = 0; i < 50; i++){
			printf("%d \n", (rand() % 51));
	}
}
void bacanje_kocke(){
	int x, polje[6]={0};
	printf("Unesi broj > 1000000\n");
	scanf_s("%d", &x);
	kocka(&polje[0], x);



}
void nizzzzz(){
	int i;
	char ime[6];
	char niz[] = "Ivo";
		strcpy(ime, niz);
		for (i = 0; ime[i] !='\0' ; i++){
			printf("%c", ime[i]);
		}
}




	int main(void) {
		Marta();
		scanf("\n");
	}