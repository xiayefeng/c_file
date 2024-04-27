#include <stdio.h>
#include <stdlib.h>

void printRect(){
	int a[3][4]= {{3,0,4,5},{6,2,1,7},{4,1,5,8}};
	int b[4][4] = {{1,4,0,3},{2,5,1,6},{0,7,4,4},{9,3,6,0}};
	int c[3][4] = {{0}};
	int i,j,k;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			for(k=0; k<4;k++){
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}
