#include <stdio.h>
#include <stdlib.h>

void printNum(int n) {
	int *d = calloc(n, sizeof(int));
	d[0] = 0;
	d[1] = 1;
	int i;
	for(i=2; i<n; i++) {
		d[i] = d[i-1] + d[i-2];
	}
	for(i=n-1;i>=0;i--){
		printf("%d, ", d[i]);
	}
	printf("\n");
}
