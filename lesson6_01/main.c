#include <stdio.h>
#include <stdlib.h>
#define N 7

void xk3(int*, int*);
void xk4(int, int);
int xk5(int a[], int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x = 5, y=10;
	int b[N]={1,7,2,6,4,5,3};
	int m1=xk5(b, N);
	int m2=xk5(&b[2], 3);
	int m3=xk5(b+3, 4);
	printf("%d %d %d\n", m1, m2, m3);
	
	printf("x=%d, y=%d\n", x, y);
	xk3(&x, &y);
	printf("x=%d, y=%d\n", x, y);
//	xk3(&x, &y);
//	printf("x=%d, y=%d\n", x, y);
	xk4(x, y);
	printf("x=%d, y=%d\n", x, y);
	return 0;
}
