#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<time.h>
#define r(i,j) [(i)*brojac + (j)]
#define MAXSTOG 5
#define MAXZ 5
typedef int tip;

typedef struct{
	int mbr;
	char ime[40 + 1];
	char spol[1 + 1];
}osoba;
osoba o1;
typedef struct{
	char JMBG[14];
	char ime_prez[41];
	float prihod;
	float porez;
}zapis;

typedef struct{
	char naziv[30];
	int pb;
	char opcina[30];
}zapmjesto;
typedef struct{
	int vrh;
	float podatak[5];
}StogRealni;
typedef struct{
	int vrh, podatak[MAXSTOG];
}Stog;

void Pokazivac(){
	int a = 4;
	int *b;
	b = &a;
	*b = 8;
	printf("%d %d", a, *b);
}
void AritmetikaPokazivaca(){
	char *c; short *s; int *i; float *f; double *d;
	void *v;
	long dugi; double dupli;
	long *pdugi; double *pdupli;
	short veldugi, veldupli;
	c = 0; s = 0; i = 0; f = 0; d = 0; v = 0;
	//Inkrement  za 1
	c++;
	s++;
	i++;
	f++;
	d++;
	//v++;
	//v javlja grešku jer se ne zna velicina
	veldugi = sizeof(dugi);
	pdugi = &dugi;
	pdugi++;
	veldupli = sizeof(dupli);
	pdupli = &dupli;
	pdupli = pdupli + 2;
	printf("%d %d", veldugi, veldupli);
}
	void z0(int tri, int sedam){ /*call by value*/
		int pom;
		pom = tri;
		tri = sedam;
		sedam = pom;
	}
	void z1(int *tri, int *sedam){/*call by refference*/
		int pom;
		pom = *tri;
		*tri = *sedam;
		*sedam = pom;
		}
	void z2(int *tri, int *sedam){ /*lokalna zamjena adresa isto ne radi*/
		int *pom;
		pom = tri;
		tri = sedam;
		sedam = pom;
}
	void fatal(char *poruka) {
		fputs(poruka, stderr); fputs("\n", stderr);
		exit(1);
	}

void Komunikacijasfunkcijama(){
	int tri = 3; int sedam = 7;
	z0(tri, sedam);
	printf("Nakon z0 %d %d\n", tri, sedam);
	tri = 3; sedam = 7;
	z1(&tri, &sedam);
	printf("Nakon z1 %d %d\n", tri, sedam);
	tri = 3; sedam = 7;
	z2(&tri, &sedam);
	printf("Nakon z2 %d %d\n", tri, sedam);
}
void PrimjerZaMalloc(){
	int polje[10];
	short *i, *desetshortova;
	i = (short *)malloc(sizeof (short));
	desetshortova = (short*)malloc(10 * sizeof(short));
	*i = 7;
	printf("%d", sizeof(polje));
	printf("%d", sizeof(desetshortova)); 

	free((void*)i);

	//*i = 7;

	//i = NULL;

	return 0;
}
void MallocMatrica(){
	/*int *p;
	long *r;
	int i,j, brojac=0,pom;
	FILE *du, *di;
	du = fopen("Datoteka.txt", "r");
	while (fscanf(du, "%d", pom) == 1){
	brojac++;
	}
	p = malloc(brojac*sizeof(int));
	fseek(du, 0L, SEEK_SET);
	while (fscanf(du, "%d", p) == 1){
	p++;
	}
	fclose(du);
	r = malloc(brojac*brojac*sizeof(long));
	for (j = 0; j < brojac; j++){
	r(0,j) = p[j];
	}
	free(p);
	for (i = 1; i < brojac; i++){
	for (j = 0; j < brojac; j++){
	r(i,j) = r(i-1,j) * r(0,j);
	}
	}
	for (i = 0; i < brojac; i++){
	for (j = 0; j < brojac; j++){
	printf("%10ld", r(i, j));
	}
	}

	}*/
}
char *datum_rodenja(char *jmbg){
		int datum, mjesec, godina;
		char *p;
		sscanf(jmbg, "%2d%2d%3d", &datum, &mjesec, &godina);
		if (godina < 100){
			godina += 1000;
		}
		else{
			godina += 2000;
		}
		p = malloc(11 * sizeof(char));
		sprintf(p, "%02.%02.%04.", datum, mjesec, godina);
		return p;
	}
void dvodimenzionalnopolje(){
	int i, j, pom;
	int m, n, *polje;
	FILE *DI;
	DI = fopen("UlazZaDvodimenzionalnoPolje.txt", "r");
	fscanf(DI, "%d %d\n", &m, &n);
	polje = malloc(m*n*sizeof(int));
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++);
		fscanf(DI, "%d", &pom);
		*(polje + i*n + j) = pom;
	}
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			printf("%d indeks[%d][%d] indeksjedn. %d ", *(polje + i*n +j), i, j, (i*n +j));
		}
		printf("\n");
	}
	
	while (1){
			
		printf("Unesi indekse dvodimenzionalnog polja\n");
		scanf("%d %d", &i, &j);
		printf("Pripadni indeks jednodimenzionalnog polja je %d , a sadrazj je: %d\n", i*n + j, *(polje + i*n + j));

	}
}
float zbrojpoz_elemenata( float *polje,	int m, int n, int maxstup){
	int i, j, suma=0;
	for (i = 0; i < m; i++){
		for (j = 0; j < n; j++){
			if (*(polje + i*maxstup + j) > 0){
				suma += *(polje + i*maxstup + j);
			}
		}
	}
	return suma;

}
void SumaUPolju(){
	int MAXSTUP = 20;
	int MAXRED = 100;
	int brred, brstup, i, j;
	float matrica[20][100];
	/*Odreðivanje pravih vrijednosti brred i brstup*/
	srand((unsigned)time);
	brred = rand() % 100 + 1;
	brstup = rand() % 20 + 1;
	for (i = 0; i < brred; i++){
		for (j = 0; j < brstup; j++){
			matrica[i][j] = (float)rand();

		}
	}
	zbrojpoz_elemenata(matrica, brred, brstup, 20);

}
osoba dohvacanjeIbrisanje(FILE *DO, int matbr){
	osoba o2;
	fseek(DO, (matbr - 1)*sizeof(o1), SEEK_SET);
	fread(&o1, sizeof(o1), 1, DO);
	o2 = o1;
	fseek(DO, (-1)*sizeof(o2), SEEK_CUR);
	
		o2.mbr = 0;
		fwrite(&o2, sizeof(o1), 1, DO);
	
	return o1;



}
void Dohvati(){
	int i, j,a, b, maticni_broj;
	typedef struct{
		int mbr;
		char ime[40 + 1];
		char spol[1 + 1];
	}osoba;
	osoba o1;
	FILE *DI, *DO;
	DI = fopen("studenti.txt", "r");
	if (DI == NULL){ fatal("Nije uspjelo otvaranje datoteke studenti.txt"); }
	DO = fopen("studenti.bin", "w+");
	if (DO == NULL){ fatal("Ne moze se otvoriti binarna datoteka za pisanje studenti.bin"); }
	/*Brisanje datoteke studenti.bin*/
	o1.mbr = 0;
	for (i = 0; i < 999; i++){
		a=fwrite(&o1, sizeof(o1), 1, DO);
		if (a != 1){
			fatal("Ne mogu upisati  u binarnu datoteku.");
		}
	}
	a = 0;
	fseek(DO, 0L, SEEK_SET);
	/*Prijepis u tekstualnu*/
	while (fscanf(DI, "%3d%s%c", o1.mbr, o1.ime, o1.spol) != EOF){
		a= fseek(DO, (o1.mbr - 1)*sizeof(o1), SEEK_SET);
		if (a != 0){
			fatal("Pozicioniranje nije uspjelo.(Greska)");
		}
		b= fwrite(&o1, sizeof(o1), 1, DO);
		if (b != 1){
			fatal("Ne mogu upisati u direktnu");
		}
	}
	scanf("%d", &maticni_broj);
	dohvacanjeIbrisanje(DO, maticni_broj);
	while (1){
		if (o1.mbr){
			printf("Izbrisan je zapis: %d %s %c", o1.mbr, o1.ime, o1.spol);
		}
		else{
			printf("Ne postoji zapis: %d %s %c", o1.mbr);
			break;
		}
	}


}
void proba(){
	int n;
	srand((unsigned)time(NULL));
	n = rand() % 1000 + 1;
	printf("%d", n);
}
void funkcija(FILE *DI, int brojzapisa, zapis *z1){
	int i;
	zapis z2;
	for (i = 0; i < brojzapisa; i++){
		fscanf(DI, "%s%s%f%f", &z2.JMBG, &z2.ime_prez, &z2.prihod, &z2.porez);
			*(z1 + i) = z2;
	}

}
int najveciPorez(FILE *DI, int brojzapisa, zapis *z1){
	int i, indeks=0;
	zapis z3;
	float najvPorez = 0;
	for (i = 0; i < brojzapisa; i++){
		z3 = *(z1 + i);
		if (z3.porez > najvPorez){
			najvPorez = z3.porez;
			indeks = i;
		}

	}
	return indeks;

}


void Porez(){
	int i, j, indeks;
	long brojzapisa = 0;
	float najvPorez = 0;
	zapis *z1, *z4;
	FILE *DI;
	DI = ("porez.dat", "r+b");
	fread(brojzapisa, sizeof(long), 1, DI);
	z1 = (zapis*)malloc(brojzapisa*sizeof(zapis));

		/*funkcija koja uèitava sadržaj datoteke u dinamièki alocirano polje struktura*/
		funkcija(DI, brojzapisa, z1);

		/*funkcija koja nalazi poreznog obveznika koji mora platiti najveæi porez    */
		indeks= najveciPorez(DI, brojzapisa, z1);
		printf("Porezni obveznik koji mora platiti najveæi porez je %s %s ", z1[indeks].JMBG, z1[indeks].ime_prez);




}
// Ispisuje uzlazno (od n1 do n2)
void ispis_u2a(int n1, int n2) {
	if (n1 <= n2) {
		printf("\n%d", n1);
		ispis_u2a(n1 + 1, n2);
	}
}
// Ispisuje uzlazno (od n1 do n2)
void ispis_u2b(int n1, int n2) {
	if (n1 <= n2) {
		ispis_u2b(n1, n2 - 1);
		printf("\n%d", n2);
	}
}
// Ispisuje silazno (od n2 do n1)
void ispis_s2a(int n1, int n2) {
	if (n1 <= n2) {
		printf("\n%d", n2);
		ispis_s2a(n1, n2 - 1);
	}
}
// Ispisuje silazno (od n2 do n1)
void ispis_s2b(int n1, int n2) {
	if (n1 <= n2) {
		ispis_s2b(n1 + 1, n2);
		printf("\n%d", n1);
	}
}
// Fibonacci.c
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void sortirajPoRedu(){
	int i, j, brojac = 0, pom, n;
	int polje[12] = { 2, 39, 12, 15, 23, 25, 31, 8, 9, 6, 5, 21 };
	for (i = 0; i < 12; i++){
		printf("%d ", polje[i]);
	}
	for (i = 0; i < 11; i++){
		for (j = i + 1; j < 12; j++){
			if (polje[i] > polje[j]){
				pom = polje[i];
				polje[i] = polje[j];
				polje[j] = pom;
			}

		}
	}
	printf("\n");
	for (i = 0; i < 12; i++){
		printf("%d ", polje[i]);
	}

}
int BinTraz(tip a[], tip x, int n, int *brojpokusaja){
	//funkcija vraca redni broj clana u polju, ako ne postoji vraca -1
	int donji, gornji, srednji;
	donji = 0;
	gornji = n - 1;
	*brojpokusaja = 0;
	while (donji <= gornji){
		srednji = (donji + gornji) / 2;
		printf("Trazim u a[%2d:%2d], a[%2d]=%2d \n", donji, gornji, srednji, x);
		if (x > a[srednji]){
			donji = srednji + 1;
		}
		else if (x < a[srednji]){
			gornji = srednji - 1;
		}
		else {
			return srednji;
		}
	}
	return -1;
}
void binpret(){
	int i = 0, j, n, broj;
	int indeks, brojpokusaja;
	int polje[100] = { 0 };
	//treba procitati iz datoteke ulazne podatke
	FILE *du;
	du = fopen("UlazZaBinarnoPretrazivanje.txt", "r");
	while (fscanf(du, "%d", &polje[i]) == 1){
		i++;
	}
	n = i;
	printf("Broj clanova polja je %d\n", n);
	for (i = 0; i < n; i++){
		printf("%d ", polje[i]);
	}
	fclose(du);
	printf("\nUcitaj broj ciji indeks iz polja zelis znati\n");
	scanf("%d", &broj);
	indeks = BinTraz(&polje[0], broj, n, &brojpokusaja);
	printf("Broj %d je %d po redu\n", broj, indeks);
}
void citanje_poBlokovimaJa(){

	int i=0, j, n, broj, brojac=0;
	FILE *du;
	zapmjesto zm;
	du = fopen("mjesta.dat", "rb");
	while (fread(&zm, sizeof(zm), 1, du) == 1){
		brojac++;
	}
	printf("Ima %d mjesta", brojac);
	//treba naci Malinsku 6527
	fseek(du, 0L, SEEK_SET);
	while (!strcmp(*(zm.naziv + i), "Malinska")){



	}




}
int nadjiMjesto(char *naziv, zapmjesto *z){
	FILE *f;
	zapmjesto zm, zm2;
	int BLOK = 60;
	int i, podatak_nadjen=0;
	int brojacBlokova = 0, brojacuBloku = 0;

	if ((f = fopen("mjesta.dat", "rb")) == NULL)
	{
		printf("Greska: otvaranje datoteke!\n");
		exit(1);
	}
	while (fread(&zm, sizeof(zm), 1, f)){
		brojacBlokova++;
		if (strcmp(naziv, zm.naziv) < 0){
			break;
		}
		else if (strcmp(zm.naziv,naziv)==0){
			podatak_nadjen = 1;
			break;
		}
		else{
			fseek(f, (brojacBlokova*BLOK *sizeof(zm)- 1), SEEK_CUR);
		}
	}

	if (!feof(f)){
		//podatak se nalazi u proslom bloku
		fseek(f, -1*BLOK*sizeof(zm), SEEK_CUR);
		while (1){
			brojacuBloku++;
			fread(&zm, sizeof(zm), 1, f);
			if (zm.naziv == naziv){
				podatak_nadjen = 1;
				break;
			}
			if (brojacuBloku > 60){
				break;
			}
			
		}
	}
	*z = zm;
	return z;

	

}
void blokovi(){
	zapmjesto zm;
	char trazi[30];
	do{
		printf("Upisi naziv mjesta (k - kraj)");
		scanf("%s", trazi);
		if (strcmp(trazi, "k")!=0)
		if (nadjiMjesto(trazi, &zm)){
			printf("Trazeno mjesto: \n%d; %s; %s\n", zm.pb, zm.naziv, zm.opcina);
		}
		else{
			printf("Ne postoji trazeno mjesto!\n");
		}


	} while (strcmp(trazi, "k") != 0);

	return 0;
}
void proba2(){
	int n;
	char polje[256] = {"1508995330153"};
	n = atoi(&polje[12]);
	printf("%d ", n);

}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define VELJMBG 13
#define VELIME 14
struct zapis{
	char JMBG[VELJMBG + 1];
	char prezime[VELIME + 1];
};

#define BLOK 512L		// Blok na disku
#define N 350				// Ocekivani broj zapisa:    
#define C ((int) (BLOK / sizeof (struct zapis)))	// Broj zapisa u pretincu
#define M ((int) (N / C *1.3))	// Broj pretinaca, kapacitet 30% veci od minimalnog:
/*
#define C 1
#define M 5
*/

struct zapis ulaz, pretinac[C];

void Pogreska(char *poruka) {
	fputs(poruka, stderr); fputs("\n", stderr);
	exit(1);
}

void Isprazni(FILE *ft) {
	int i;
	for (i = 0; i < C; i++) pretinac[i].JMBG[0] = '\0';
	for (i = 0; i < M; i++) {
		fseek(ft, i*BLOK, SEEK_SET);
		fwrite(pretinac, sizeof (pretinac), 1, ft);
	}
	printf("Tablica ispraznjena N=%d, C=%d, M=%d\n", N, C, M);
	printf("Velicina pretinca = %d\n", sizeof (pretinac));
}

int OdrediPrim(int m) {
	int i, prim, kraj;
	printf("Trazenje najveceg prim broja <= %d\n", m);
	prim = m + 1;
	do {
		prim--;
		kraj = (int)pow((double)prim, (double) 0.5);
		for (i = kraj; i > 0; i--) {
			printf("%d/%d ", prim, i);
			if (prim % i == 0) break;
		}
	} while (i != 1);
	return prim;
}

int Kontrola(char JMBG[]) {
	int i, kz;
	long suma;
	char tez[12 + 1] = "765432765432";
	suma = 0;
	for (i = 0; i < 12; i++) {
		suma += (JMBG[i] - '0') * (tez[i] - '0');
	}
	kz = 11 - (suma % 11);
	if (kz == 10) kz = -1; // pogr. kontrolna znamenka
	if (kz == 11) kz = 0;
	return kz;
}

int Adresa(char JMBG[], int prim) {
	int i, a, b, c, adr;
	char pom[4 + 1];
	pom[4] = '\0';
	// Preklapanje
	for (i = 0; i < 4; i++) pom[i] = JMBG[i + 4];
	a = atoi(pom);
	for (i = 0; i < 4; i++) pom[i] = JMBG[3 - i];
	b = atoi(pom);
	for (i = 0; i < 4; i++) pom[i] = JMBG[11 - i];
	c = atoi(pom);
	// Dijeljenje
	adr = (a + b + c) % prim;
	printf("Izracunata adresa (%d) = %d\n", (a + b + c), adr);
	return adr;
}

int Upis(struct zapis ulaz, FILE *ft, int prim) {
	int i, j, poc;
	i = Adresa(ulaz.JMBG, prim);
	// Upamti izraèunatu adresu kao poèetnu
	poc = i;
	do { // Ponavljaj dok ne upišeš ili ustanoviš da je datoteka puna    
		// Èitaj iz pretinca sve upisane zapise
		fseek(ft, i*BLOK, SEEK_SET);
		fread(pretinac, sizeof (pretinac), 1, ft);
		for (j = 0; j < C; j++) {
			if (pretinac[j].JMBG[0] != '\0') {
				// Ako zapis nije prazan
				printf("Vec upisani JMBG =");
				printf("%s\n", pretinac[j].JMBG);
				if (strncmp(pretinac[j].JMBG, ulaz.JMBG, VELJMBG) == 0) {
					// Ako je upisani JMBG identièan ulaznom
					printf("Vec postoji zapis s JMBG %s\n", ulaz.JMBG);
					return 1;
				}
			}
			else {
				// Upiši ulazni zapis na prazno mjesto
				pretinac[j] = ulaz;
				fseek(ft, i*BLOK, SEEK_SET);
				printf("U pretinac %d upisujem %d. zapis\n", i, j);
				fwrite(pretinac, sizeof (pretinac), 1, ft);
				return 1;
			}
		}
		// U pretincu nema mjesta, prijeði ciklièki na sljedeæega
		i = (i + 1) % M;
		printf("Nema mjesta, slijedi pretinac = %d\n", i);
	} while (i != poc); // Dok se ne ne vratiš na poèetni
	return 0;  // Niti u jednom zapisu nema mjesta
}

void Ispis(FILE *ft) {
	// Ispis sadržaja tablice raspršenih adresa
	int i, j;
	printf("Ispis sadrzaja tablice \n");
	for (i = 0; i < M; i++) {
		fseek(ft, i*BLOK, SEEK_SET);
		fread(pretinac, sizeof (pretinac), 1, ft);
		for (j = 0; j < C; j++) {
			if (pretinac[j].JMBG[0] != '\0') {
				// Ako zapis nije prazan
				printf("Zapis na adresi %d:", i);
				printf("%s %s \n", pretinac[j].JMBG, pretinac[j].prezime);
			}
		}
	}
}

int Trazi(char mbr[], FILE *ft, int prim, struct zapis *ulaz) {
	int i, j, poc;
	i = Adresa(mbr, prim);
	// Upamti izraèunatu adresu kao poèetnu
	poc = i;
	do {  // Ponavljaj dok ne nadješ ili ustanoviš da ga nema
		printf("Citam %d. zapis\n", i);
		fseek(ft, i*BLOK, SEEK_SET);
		fread(pretinac, sizeof (pretinac), 1, ft);
		for (j = 0; j < C; j++) {
			if (pretinac[j].JMBG[0] != '\0') {
				// Ako zapis nije prazan
				printf("%d. upisani JMBG =%s\n", j, pretinac[j].JMBG);
				if (strcmp(pretinac[j].JMBG, mbr) == 0) {
					// Ako je upisani JMBG identièan ulaznom 
					*ulaz = pretinac[j];
					return 1;
				}
			}
			else {
				// Nema zapisa
				return 0;
			}
		}
		// Pretinac je pun, prijeði ciklièki na sljedeæega
		i = (i + 1) % M;
	} while (i != poc); // Dok se ne ne vratiš na poèetni
	return 0; // Svi pretinci posjeæeni, zapis nije pronaðen
}

int main2() {
	FILE *fi, *ft;
	char mbr[VELJMBG + 1];
	int prim;
	if ((fi = fopen("UlazZaHash.txt", "r")) == NULL)
		Pogreska("Ne mogu otvoriti datoteku \"ulaz\"");
	if ((ft = fopen("tablica", "w+")) == NULL)
		Pogreska("Ne mogu otvoriti datoteku \"tablica\"");
	printf("Ulazni zapis je velicine %d\n", sizeof (ulaz));
	Isprazni(ft);
	Ispis(ft);
	// Odredi prim broj za dijeljenje
	prim = OdrediPrim(M);
	printf("Prim broj za dijeljenje = %d\n", prim);
	// Èitaj slijedno JMBG, prezime, ime dok ima podataka
	getchar();
	while (fscanf(fi, "%13s%s", ulaz.JMBG, ulaz.prezime) != EOF) {
		printf("Procitan zapis %s %s \n", ulaz.JMBG, ulaz.prezime);
		if (Kontrola(ulaz.JMBG) == atoi(&ulaz.JMBG[12])) {
			// Ako je kontrolna znamenka ispravna
			if (!Upis(ulaz, ft, prim))
				Pogreska("Tablica je puna\n");
		}
		else {
			printf("Neispravan JMBG %s", ulaz.JMBG);
			printf(", kontrolna znamenka treba biti %d\n", Kontrola(ulaz.JMBG));
		}
		printf("\n");
	}
	fclose(fi);
	getchar();
	Ispis(ft);
	while (1) {
		printf("Upisite JMBG >");
		scanf("%s", mbr);
		if (Trazi(mbr, ft, prim, &ulaz)) {
			printf("%s %s\n", ulaz.JMBG, ulaz.prezime);
		}
		else {
			printf("JMBG %s nije u tablici\n", mbr);
			break;
		}
	}
	fclose(ft);

	scanf("\n");
	return 0;
	
}
int zbroji(int n){
	if (n == 0){
		return 0;
	}
	else if (n == 1){
		return 1;
	}
	else{
		return n + zbroji(n - 1);
	}
}
void ispisiuzlazno(int a, int b){

	if (a <= b){
		printf("%d ", a);
		ispisiuzlazno(a + 1, b);
		
	}
	
}
long fact(int n){
	if (n == 0){
		return 1;
	}
	else if(n == 1){
		return 1;
	}
	else return n * fact(n - 1);

}
void fibnormalno(int n){
	int parni = 1, i;
	int neparni = 1;
	if (n < 0){
		printf("Ne postoji niz od n negatinih brojeva");
	}
	else if (n == 0){
		printf("Ne postoji niz od 0 elemenata");
	}
	else{
		for (i = 0; i < n/2; i++){
			printf("%d ", neparni);
			neparni = neparni + parni;
			printf("%d ", parni);
			parni = neparni + parni;
		}
		if ((n % 2) == 1){
			printf("%d ", neparni);
		}
	}
}

int FR(int n){
	if (n < 1){
		return 1;
	}
	else{
		return FR(n-2) + FR(n-1);
	}
}
int nadji_nzd(int a, int b){
	if (b == 0){
		return a;
	}
	else{
		return nadji_nzd(b, a % b);
	}
}
int skini(float *element, StogRealni *stog){
	if (stog->vrh < 0) return 0;
	*element = stog->podatak[stog->vrh];
}
typedef int tip;

struct cvor{
	int broj;
	float polje[10];
};
typedef struct{
	int vrh;
	struct cvor podatak[MAXZ];
}Stogstrukture;

void init_stog(Stogstrukture *stog){
	stog->vrh = -1;
}

int stavi(struct cvor element, Stogstrukture *stog){
	if (stog->vrh > MAXZ) return 0;
	stog->vrh++;
	stog->podatak[stog->vrh] = element;
	return 1;
}
void ispis_stoga(Stogstrukture *stog){
	int i, j;
	if (stog->vrh == -1){
		printf("Prazan stog\n");
	}
	else{
		printf("Stog: \n");
		for (i = 0; i <= stog->vrh; i++){
			printf("%d. %d ", i, stog->podatak[i].broj);
			for (j = 0; j < 10; j++){
				printf("%.2f ", stog->podatak[i].polje[j]);
			}
			printf("\n");
		}
		printf("\n");
	}
}

int main(){
	int i;
	struct cvor element;
	Stogstrukture stog;
	init_stog(&stog);
	element.broj = 10;
	srand(time(NULL));
	for (i = 0; i < 10; i++){
		element.polje[i] = rand() % 101;
	}

	init_stog(&stog);
	stavi(element, &stog);
	element.broj = 3;
	for (i = 0; i < 10; i++){
		element.polje[i] = rand() % 10;
	}

	printf("%d\n", stavi(element, &stog));
	ispis_stoga(&stog);
	scanf("\n");
	return 0;
}