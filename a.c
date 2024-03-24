#include <stdio.h>
#define M 3
#define N 4
void testFn(){
	int a[M][N] = {{7,5,14,3},{6,20,7,8},{14,6,9,18}};
	int i,j;
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			printf("%5d", a[i][j]);
		}
		printf("\n");
	}
}
