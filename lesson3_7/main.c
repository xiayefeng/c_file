#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const int n = 10;
void getLen();
void getSignalNum(int num);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, m;
	double x, s1, s2;
	double v, f, t;
	getLen();
	printf("输入小于等于多少的素数值:");
	scanf("%d", &m); 
	getSignalNum(m);
	s1= s2=0;
	printf(" 从键盘上输入%d 个实验数据: \n", n);
	for(i=1;i<=n;i++){
		scanf("%lf", &x);
		s1+= x;
		s2+= x*x;
	}
	v= s1/n;
	f = s2 /n - v*v;
	t= sqrt(f);
	printf(" 平均值: %10.2Lf\n", v);
	printf(" 方差: %10.2Lf\n", f);
	printf(" 均方差: %10.2Lf\n", t);
	return 0;
}
