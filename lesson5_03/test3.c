#include <stdio.h>

void printNum2(){
	int x=20,y=40,*p;
	p=&x;
	printf("%d ", *p);
	*p=x+10;
	p=&y;
	printf("%d\n", *p);
	*p=y+20;
	printf("%d %d\n", x,y);
}
