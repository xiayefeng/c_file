#include <stdio.h>

void printList(){
	int a[8] = {6,8,2,5,4,3,5,7};
	int s = 0;
	int *p=a+2;
	while(p<a+6) s+= *p++;
	while(--p>=a+2) printf("%5d", *p);
	printf("\n");
	printf("%6d%6.2Lf\n", s, s/4.0);
}
