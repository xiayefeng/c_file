#include <stdio.h>
#include <stdlib.h>

int sum(int a[], int n) {
	if(n<=0) {
		printf("����nֵ�Ƿ�!\n");
		exit(1);
	}
	if(n==1) return a[0];
	else return a[n-1] +sum(a, n-1);
}
