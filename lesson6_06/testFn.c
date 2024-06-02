#include <stdio.h>
#include <stdlib.h>

int fn2(int x, int y);
void fn3(int a[], int n, int* s);
int c=15;

void fn(){
	int a=10,b=20;
	printf("%d %d %d\n", a, b, c);
	{
		int b=a+15;
		a=b/3;
		c=2*(a+b);
		printf("%d %d %d\n", a, b, c);
	}
	printf("%d %d %d\n", a, b, c);
	{
		int x=5, y=8;
		int z=fn2(x, y);
		printf("x=%3d, y=%3d\n", x, y);
		printf("z=%3d\n", z);
	}
	{
		int a[5]={2,7,5,4,9};
		int x;
		fn3(a, 5, &x);
		printf("%d\n", x);
	}
}

int fn2(int x, int y){
	x=x+y;
	y=x+y;
	printf("x=%3d, y=%3d\n", x, y);
	return x + y;
}

void fn3(int a[], int n, int* s){
	int i;
	*s=0;
	for(i=0;i<n;i++) *s+=a[i];
}

