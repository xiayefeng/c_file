#include <stdio.h>
#include <stdlib.h>

void fn();
char* f3(const char* x, const char* y);
int f4(int a[][4], int m, int n);
int wr(int* a, int n);
int fun1(int n);
void xk(unsigned int x);
void fun2(int *a, int n);
char* fun3(char* a, const char* b);
int multiple(int a, int b, int k);
int Contrary(unsigned int x);
int getSqurtSum(int a[], int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	fn();
	{
		char* a = "apple";
		char b[10] = "pear";
		char *p;
		p=f3(a, b);
		printf("%s\n", p);
		free(p);
	}
	{
		int a[3][4]= {{25,38,46,72},{35,20,50,66},{18,74,38,69}};
		int x=f4(a, 3, 4);
		printf("x=%d\n", x);
	}
	{
		int a[]= {1,2,3,4,6,5,2,7};
		int b=wr(a, 4), c=wr(&a[4], 3);
		printf("%d\n", b+c);
	}
	{
		int a[]= {1,2,3,4,6,5,2,7};
		fun2(a, 8);
	}

	printf("%d\n", fun1(6));
	xk(324543);
	{
		int a = multiple(36, 12, 4);
		printf("%d\n", a);
		printf("%d\n", Contrary(91));
	}
	{
		char* b = "hello world!";
		char a[13]; 
		char* c;
		c= fun3(a, b);
		printf("%s\n", c);
		printf("%s\n", fun4(c, b));
	}
	{
		int a[] = {1,2,3,4,5,6,7,8,9,10};
		printf("%d\n", getSqurtSum(a, 10));
	}
	
	return 0;
}
