#include <stdio.h>
#include <stdlib.h>

double f1(int n);
double fn3(int n);
int fn4();
void getNumAssic();
int minDouble(int, int);
int maxDevide(int, int);
void calcNum();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("3的n立方之和为: %Lf\n", fn3(10));
	printf                                                                                                    ("小于1000的偶数平方和最大数是: %d\n", fn4());
	getNumAssic();
	printf("输入两个正整数：");
	do scanf("%d %d", &b, &c); while(b<=0 || c<=0);
	printf("%d和%d的最大公约数：%d\n", b, c, maxDevide(b, c));
	printf("%d和%d的最小公倍数：%d\n", b, c, minDouble(b, c));
	
	printf("输入一个大于等于2的整数:");
	do scanf("%d", &a); while(a<=1);
	printf("%Lf\n", f1(a)); 
	calcNum();
	return 0;
}
