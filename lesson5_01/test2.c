#include <stdio.h>

void printPoint(){
	char a[10]= "ABCDEF";
	int b[6] = {1,3,5,7,9,11};
	char *p1=a, *p2;
	int *q1=b,*q2;
	p2=p1+4; // p2ָ��a[4] 
	q2=q1+2; // q2 ָ��b[2]
	printf("%c %c %c\n", *p1, *p2, *(p2-1));
	printf("%d %d %d\n", *q1, *q2, *(q2  +3));
}
