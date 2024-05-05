#include <stdio.h>
#include <stdlib.h>

const int n=5;

void printNum3() {
	int i, *a;
	a=calloc(n, sizeof(int));
	for(i=0; i<n; i++) {
		if(i%2) a[i]=2*n+i;
		else a[i]=2*n -i;
	}
	for(i=0; i<n; i++) printf("%d ",a[i]);
	printf("\n");
}
