#include <stdio.h>
#include <stdlib.h>
void fun2(int a[], int n, int* c1, int* c2);
int fun5(int m, int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[] = {1,2,3,4,5,6,7,8,9};
	int c1, c2;
	fun2(a, 9, &c1, &c2);
	printf("c1=%d\nc2=%d\n", c1, c2);
	printf("%d\n", fun5(23, 45));
	printf("%d\n", fun5(46, 28));
	printf("%d\n", fun5(23, 46));
	return 0;
}
