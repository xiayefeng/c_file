#include <stdio.h>
#include <stdlib.h>

void xk2(){
	int a=0;
	static int b=0;
	a++;
	b++;
	printf("a=%d, b=%d\n", a, b);
}
