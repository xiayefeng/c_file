#include<stdio.h>

void printFn() {
	int a[3][4] = {{1,2,7,8},{5,6,11,12},{9,10,3,4}};
	int x=a[0][0];
	int ii=0,jj=0;
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(a[i][j] > x) {
				x= a[i][j];
				ii=i;
				jj=j;
			}
		}
	}
	printf("a[%d, %d]=%d\n", ii, jj, a[ii][jj]);
}
