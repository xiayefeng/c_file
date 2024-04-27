#include<stdio.h>
#include<string.h>

#define N 10

void f4(char a[][N], unsigned int m) {
	unsigned int i,j,k,w;
	for(i=1; i<m; i++) {
		char x[N];
		w=i-1;
		k=strlen(a[i-1]);
		for(j=i; j<m; j++) {
			if(strlen(a[j])<k) {
				k=strlen(a[j]);
				w=j;
			}
		}
		strcpy(x, a[i-1]);
		strcpy(a[i-1], a[w]);
		strcpy(a[w], x);
	}
}
