#include <stdio.h>
#include<string.h>

#define M1 10
#define N1 30

void SelectSort(char a[M1][N1]){
	int i,j,k;
	for(i=1;i<M1;i++){
		char x[N1];
		
		k=i-1;
		for(j=i;j<M1;j++){
			if(strcmp(a[j], a[k]) <0) k=j;
		}
		if(k!= i-1){
			strcpy(x, a[i-1]);
			strcpy(a[i-1], a[k]);
			strcpy(a[k], x);
			
		}
	}
}
