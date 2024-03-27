#include <stdio.h>
void findMinNum(){
	int b[2][5] = {{7, 15, 5, 8, 20}, {12, 25, 37, 16, 28}};
	int i,j,k=b[0][0];
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			if(b[i][j] < k) k=b[i][j];
		}
	}
	printf("%d\n", k);
}
