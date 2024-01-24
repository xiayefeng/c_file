#include <stdio.h>
#include <stdlib.h>
void trans(int x);
void trans2(int x);
double Newton(double);
void printNum();
void printNum2();
void printNum3();
void pirntNum4();
void pirntNum5();
void printNum6();
void pirntfNum7();
void printNum7();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d;
	double x;
	printNum();
	printNum2();
	printNum3();
	pirntNum4();
	pirntNum5();
	printNum6();
	pirntfNum7();
	printNum7();
	printf(" 从键盘输入一个十进制正整数:");
	do scanf("%d", &d); while (d <0);
	trans(d);
	trans2(d);
	printf("从键盘输入任一实数自变量x的初值：");
	scanf("%lf", &x);
	printf("root: %6.3Lf\n", Newton(x));
	return 0;
}
