#include <stdio.h>

void printDeList() {
	int a[3][4] = {{2,4,6,8},{3,6,9,12},{4,8, 12, 16}};
	int (*p)[4] = a;
	int i,j;
	for(i=0; i<3; i++) {
		for(j=0; j<4; j++) {
			printf("%3d", p[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0; i<3; i++) {
		int *q=p[i];
		for(j=0; j<4; j++) {
			printf("%3d", *q++);
		}
		printf("\n");
	}
}
