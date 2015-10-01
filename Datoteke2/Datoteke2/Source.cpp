#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void prekini(char *poruka){
	puts(poruka);
	exit(1);
}

void zadatak1(){
	char b, c, polje[20];
	char niz[] = "Ivo";

	FILE *tokPod;
	tokPod = fopen("C:\\Users\\Administrator\\Desktop\\tekst.txt", "w+");

	if (tokPod == NULL) {
		printf("Pogreska: ne mogu otvoriti tekst.txt\n");
		exit(1);
	}
	fputc(65, tokPod);

	fclose(tokPod);

}
void zadatak2(){
	char niz[]= "Ivo";
	char niz2[20];
	char c;
	FILE *du, *di;
	du = fopen("stara.txt", "w+");

	fputs(&niz[0], du);
	fclose(du);
	
	di = fopen("nova.txt", "w+");
	du = fopen("stara.txt", "r");
	while ((c = fgetc(du)) != EOF){
		fputc(c, di);
	}
	fclose(du);
	fclose(di);

}
void zadatak3(){
	char niz[21];
	FILE *du, *di;
	du = fopen("stara.txt", "r");
	if (du == NULL){
		printf("Nije moguce otvoriti datoteku stara.txt");
		exit(1);
	}
	di = fopen("nova.txt", "w");
	if (du == NULL){
		printf("Nije moguce otvoriti datoteku nova.txt");
		exit(1);
	}
	while ((fgets(niz, 21, du)) != NULL){
		fputs(&niz[0], di);
	}
	fclose(du);
	fclose(di);

}
void zadatak4(){
	int m = 10;
	double x[3] = { 1.5, -3.5, 3.25 };
	int n1, n2;
		FILE *izTok;
		izTok = fopen("podaci.bin", "wb");
		n1 = fwrite(&m, sizeof(m), 1, izTok);
			n2 = fwrite(x, sizeof(&x[0]), 3, izTok);

			if (n1 < 1){
				printf("Upisivanje nije uspjelo");
				exit(1);
			}
			if (n2 < 3){
				printf("Uspjelo se zapisati %d clanova polja \n", n2);
				exit(2);
			}

	
	fclose(izTok);

}
void zadatak5(){
	int k, n1,n2;
	double y[3];
	FILE *ulTok;
	ulTok = fopen("podaci.bin", "rb");
	n1 = fread(&k, sizeof(k), 1, ulTok);
	if (n1 < 1){
		printf("Citanje k nije uspjelo\n");
		exit(5);
	}
	n2 = fread(y, sizeof(&y[0]), 3, ulTok);
	if (n2 < 3){
		printf("Ucitano je %d clanova\n", n2);
		exit(7);
	}
	fclose(ulTok);
}
void zadatak6(){
	char ime[9], prezime[9];
	int brBod;
	FILE *ulTok;
	FILE *izTok;
	ulTok = fopen("rez.txt", "r");
	izTok = fopen("rez.bin", "wb");
 	while (fscanf(ulTok, "%s %s %d", ime, prezime, &brBod) == 3) {
		fwrite(ime, sizeof(ime), 1, izTok);
		fwrite(prezime, sizeof(prezime), 1, izTok);
		fwrite(&brBod, sizeof(brBod), 1, izTok);
	}

	fclose(ulTok);
	fclose(izTok);


}
void zadatak7(){
	typedef struct{
		char ime[9];
		char prezime[9];
		int brBod;
	}zapisiRez;
	zapisiRez rez1, rez2;

	FILE *ulTok;
	ulTok= fopen("rez.bin", "rb");
	fread(&rez1, sizeof(rez1), 1, ulTok);
	fread(&rez2, sizeof(rez2), 1, ulTok);



}
void zadatak8(){
	typedef struct{
		char ime[9];
		char prezime[9];
		int brB[7];
		} osoba;
	osoba o1, o2;
	FILE *DI, *DO;
	DI = fopen("rez.txt", "r");
	DO = fopen("tekst.txt", "w+");
	fscanf(DI, "%s %s %d", o1.ime, o1.prezime, &o1.brB);
	fscanf(DI, "%s %s %d", o2.ime, o2.prezime, &o2.brB);
	printf("%s %s %d\n", o1.ime, o1.prezime, o1.brB);
	printf("%s %s %d", o2.ime, o2.prezime, o2.brB);
	

	fclose(DI);
	fclose(DO);

}
void zadatak9(){
	

	int i, n1;
	short n2;
	typedef struct{
		short matbroj;
		char imep[41];
		short starost;
		float tezina;
	} osoba;
	osoba o1;
	short tek_godina, god_rod;
	char poruka[50];
	FILE *DO, *DI;
	DI = fopen("upis.txt", "r");
	DO = fopen("tezine.bin", "wb");
	if (DI == NULL){
		prekini("Ne mogu otvoriti datoteku");
	}
	if (DO == NULL){
		prekini("Ne mogu otvoriti datoteku");
	}
	tek_godina = 2014;
	while (fscanf(DI, "%4hd%40[^\n]%4hd%f", &o1.matbroj, o1.imep, &god_rod, &o1.tezina) == 4){
		n2 = tek_godina - god_rod;
		o1.starost = n2;
		if(fseek(DO, (long)(o1.matbroj-1)*sizeof(o1), SEEK_SET) != 0){
			prekini("Pozicioniranje nije uspjelo");
		}
		n1 = fwrite((&o1), sizeof(o1), 1, DO);
		if (n1 != 1){
			prekini("Upisivanje nije uspjelo");
		}

	}
	fclose(DI);
	fclose(DO);

}
void zadatak10(){
	/*Racunanje prosjecne tjelesne tezine iz prethodnog*/
	int n1;
	float suma=0;
	float brojac=0, prosjek;
	short x, redni = 1;
	typedef struct{
		short matbroj;
		char imep[41];
		short starost;
		float tezina;
	} osoba;
	osoba o1;
	FILE *DI, *DO;
	DI = fopen("tezina.bin", "rb");
	while (fread(&o1, sizeof(o1), 1, DI) == 1){
			if (redni == o1.matbroj){
			o1.tezina = suma + o1.tezina;
			brojac++;
			}
		redni++;
	}
	prosjek = suma / brojac;
	printf("Prosjecna tezina je %f", prosjek); 
	/*Ucitavaj s tipkovnice maticne brojeve*/
	do {
		scanf("%hd", &x);
		n1 = fseek(DI, (long)(x-1)*(sizeof(o1)), SEEK_SET);
		if (n1 != 0){
			break;
		}
		fread(&o1, sizeof(o1), 1, DI);
		if (x == o1.matbroj){
			printf("%s %d %f\n", o1.imep, o1.starost, o1.tezina);
			if (o1.tezina < prosjek){
				printf("Osoba je laksa od prosjeka\n");
			}
		}
		else if (x != o1.matbroj){
			break;
		}
	}while (1);
	fclose(DI);
}
void zadatak11(){
	int n, n1, n2;
	int redni = 1;
	float uku=0, ukupno=0;
	typedef struct{
		short sifra;
		char naziv[21];
		float cijena;
	} artikli;

	typedef struct{
		short sifra;
		short broj_kupljenih;
	} kupljeno;

	artikli a1;
	kupljeno k1;

	FILE *KU, *AR ;
	KU = fopen("kupljeno.txt", "w+");
	AR = fopen("artikli.bin", "wb+");
		if (KU == NULL){
			printf("Ne mogu otvoriti datoteku");
		}
		if (AR == NULL){
			printf("Ne mogu otvoriti datoteku");
		}
		
	while(fscanf(KU, "%hd %hd", &k1.sifra, &k1.broj_kupljenih) == 2){
			fseek(AR, (long)(k1.sifra - 1)* sizeof(a1), SEEK_SET);
			fread(&a1, sizeof(a1), 1, AR);
			if (k1.sifra == a1.sifra){
				uku = k1.broj_kupljenih * a1.cijena;
				fprintf(stdout, "%s %2d %8.2f %8.2f\n", a1.naziv, k1.broj_kupljenih, a1.cijena, uku);
			}
			ukupno += uku;
		}
	printf("UKUPNO: %8.2f", ukupno);
	fclose(AR);
	fclose(KU);



}
void zadatak12(){
	int i=0, n;
	typedef struct{
		int matbroj;
		char prezime[16];
	}osoba;
	osoba o1;
	FILE *ulaz, *izlaz;
	ulaz = fopen("c:/tmp/ulaz.txt", "r");
	izlaz = fopen("c:/tmp/izlaz.txt", "w");
	if (ulaz == NULL){
		printf("Ne mogu otvoriti datoteku");
	}
	if (izlaz == NULL){
		printf("Ne mogu otvoriti datoteku");
	}
	while (fscanf(ulaz, "%d%s", &o1.matbroj, o1.prezime) == 2){
		while (o1.prezime[i] != '\0'){
			if (o1.prezime[i] == 'r' || o1.prezime[i] == 'R'){
				fputs(o1.prezime, izlaz);
				fprintf(izlaz, "%d", o1.matbroj);
			}
			i++;
		}
	}
	fclose(ulaz);
	fclose(izlaz);

}
void zadatak13(){
	int n, n1;
	typedef struct{
		int maticni_broj;
		char imep[22];
		int brojBod;
	}student;
	student s1;
	FILE *ulTok;
	ulTok = fopen("datoteka.bin", "rb+");
	if (ulTok == NULL){
		printf("Ne mogu otvoriti datoteku.");
	}
	srand((unsigned)time(NULL));
	n = rand() % 10 + 1;
	fseek(ulTok, (long)(n - 1)*sizeof(s1), SEEK_SET);
		fread(&s1, sizeof(s1), 1, ulTok);
		s1.brojBod = s1.brojBod * 0.1;
		if (s1.brojBod > 500){
			s1.brojBod = 500;
		}
		fseek(ulTok, -(long)4, SEEK_CUR);
		fwrite(&s1.brojBod, sizeof(s1.brojBod), 1, ulTok);
	

}
int bacikocku(){

	int y;
	y = rand() % 6 + 1;
	return y;
}
void kocka(){
	int i, n, y;
	int brojac[6]{0};
	printf("Upisi broj bacanja kocke\n");
	scanf("%d", &n);
	srand((unsigned)time(NULL));
	for (i = 0; i < n; i++){
		y = bacikocku();
		brojac[y - 1]++;
	}
	for (i = 0; i < 6; i++){
		printf("Broj %d se pojavio: %d\n", i + 1, brojac[i]);
	}


}
void proba(){
	char polje[100];
	FILE *d;
	d = fopen("Datoteka.txt", "w");
	fprintf(d, "%s");
	puts(polje);
}
int main(void){
	
	proba();
	

	scanf("\n");
	return 0;
}