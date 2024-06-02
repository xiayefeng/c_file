#include <stdio.h>
#include <stdlib.h>

int getSqurtSum(int a[], int n) {
	int i,s =0;
	for(i=0; i<n; i++) {
		s+=a[i] * a[i] ;
	}
	return s;
}
