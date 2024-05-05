#include <stdio.h>
#include <stdlib.h>

#define NN 8

void printNum(){
	int i, *p;
	int *x=malloc(sizeof(int));
	int *a=calloc(NN, sizeof(int));
	*x=25;
	for(i=0;i<NN;i++) a[i] = i*i+1;
	p=a+NN-1;
	do{
		if(*p>=*x) printf("%d ", *p--);
		else break;
	}while(1);
	printf("\n");
	free(x);
	free(a);
}
