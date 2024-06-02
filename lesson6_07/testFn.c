#include <stdio.h>
#include <stdlib.h>

void fun2(int a[], int n, int* c1, int* c2){
	int i, s1 = 0, s2=0;
	for(i=0;i<n;i++){
		if(a[i]%2) {
			s1++;
		} else {
			s2++;
		}
	}
	*c1 = s1;
	*c2 = s2;
}

int fun5(int m, int n){
	int r;
	while(1){
		if(n== 0) return m;
		r=m%n;
		m=n;
		n=r;
	}
}
