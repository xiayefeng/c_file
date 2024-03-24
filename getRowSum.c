#include <stdio.h>
#define M 4
void getRowSum(){
	int c[M] = {0};
	int d[M][3]={{1,5,7},{3,2,10},{6,7,9},{4,3,7}};
	int i,j,sum=0;
	for(i=0;i<M; i++){
		for(j=0;j<3;j++){
			c[i] += d[i][j];
		}
		sum += c[i];
	}
	for(i=0;i<M;i++) printf("%d ", c[i]);
	printf("%d\n", sum);
}
