#include <stdio.h>
void printNum(){
	int a=2,b=5,c;
	if(a+b>10) c=a*b; else c=3*a + 2*b;
	if(c>= 20) printf("%d", c*c);
	else if(a>b) printf("%d", 3*(a+b));
	else printf("%d", 4*c-5);
	printf("\n");
	a=a+b; b= a+b; c= a+b+c;
	printf("a=%d, b=%d, c=%d\n", a, b, c);
}
