#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void Prime(char* fname) {
	int i,j;
	FILE* fout=fopen(fname, "w");
	fputc(2, fout);
	for(i=3; i<100; i+=2) {
		for(j=2; j*j<=i; j++) {
			if(i%j==0) break;
		}
		if(j*j>i) fputc(i, fout);
	}
	fclose(fout);
}

void PrimeOut(char* fname) {
	int x;
	FILE* fin = fopen(fname, "r");
	while(1) {
		x=fgetc(fin);
		if(x==EOF) break;
		printf("%d ", x);
	}
	printf("\n");
	fclose(fin);
}

void Random(char* fname) {
	int a[20];
	int i,j,x;
	FILE* fout=fopen(fname, "wb");
	for(i=0; i<20; i++) {
		while(1) {
			x=rand() % 100;
			for(j=0; j<i; j++) {
				if(x==a[j]) break;
			}
			if(i==j) break;
		}
		a[i] =x;
	}
    fwrite(a, sizeof(int), 20, fout);
    fclose(fout);
}

void RandomOut(char* fname){
	int i, a[20];
	FILE* fin=fopen(fname, "rb");
	fread(a, sizeof(int), 20, fin);
	for(i=0;i<20;i++){
		printf("%d ", a[i]);
	}
	printf("\n");
	fclose(fin);
}
