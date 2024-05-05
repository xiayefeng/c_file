#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printNum() {
	int i=0,
	    j,n=10,*a;
	srand(time(0));
	a=calloc(n,sizeof(int));
	while(i<n) {
		a[i]=rand()%30 +10;
		for(j=0; j<i; j++) {
			if(a[i]==a[j]) break;
		}
		if(j==i) i++;
	}
	for(i=0; i<n; i++) printf("%d\n", a[i]);
}
