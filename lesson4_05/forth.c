#include <stdio.h>
#include <stdlib.h>

#define N 10
#define M 5

double a[N][M+2] = {{0}};

void 45
() {
	int i,j;
	printf("依次输入%d 个学生的%d门课程的成绩:\n",N,M);
	for(i=0; i<N; i++) {
		for(j=0; j<M; j++) {
			scanf("%lf", &a[i][j]);
		}
	}
	for(i=0; i<N; i++) {
		for(j=0; j<M; j++) {
			a[i][M] += a[i][j];
		}
		a[i][M+1] = a[i][M] / M;
		for(j=0; j<M+2; j++) {
			printf("%6.2lf ", a[i][j]);
		}
		printf("\n");
	}

}

