#include <stdio.h>

void getSignalNum(int num){
	int i, n;
	printf("2~%d������������\n%d ", num, 2);
	for(n=3;n<=num;n+=2){
		for(i=2;i*i<=n;i++)
			if(n%i==0) break;
		if(i*i > n) printf("%d ", n);
		  
	}
	printf("\n");
}
