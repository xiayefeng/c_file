#include<stdio.h>

#define N 8

void pirntArr(){
	int a[N]= {36,25,48,14,55,40,32,66};
	int i, x;
	for(i=0;i<N;i++) printf("%d ", a[i]);
	printf("\n");
	for(i=0;i<N/2;i++){
		x=a[i];
		a[i] = a[N-1-i];
		a[N-1-i] = x;
	}
	for(i=0;i<N;i++) printf("%d ", a[i]);
	printf("\n");
}
