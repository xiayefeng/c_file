#include <stdio.h>
#include <stdlib.h>

int Cdivisor(int m, int n);
void xk2();
int x=10;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int y=20;
	int m,n;
	printf("x=%d, y=%d\n", x, y);
	{
		int x=30;
		y=y+x;
		printf("x=%d, y=%d\n", x, y);
	}
	printf("x=%d, y=%d\n", x, y);
	
	int i;
	for(i=0;i<5;i++) xk2();
	
	do{
		printf("输入两个整数求其最大公约数(输入的数小于0则结束):");
		scanf("%d %d", &m, &n);
		if(m<=0 || n<=0 ) break;
		printf("%d 和 %d 的最大公约数为: %d\n", m,n,Cdivisor(m,n));
	}while(1);
	return 0;
}
