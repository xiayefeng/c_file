#include<stdio.h>

#define N 11
#define M 4

void pirntList2() {
	int a[N] = {76,83,54,62,40,75,90,92,87,77,84};
	int b[M] = {60,76,90,101};
	int c[M] = {0};
	int i,j;
	for(i=0;i<N;i++){
		j=0;
		while(a[i]>=b[j]) j++;
		c[j]++;
	}
	for(j=0;j<M;j++) printf("%d ", c[j]);
	printf("\n");

}
