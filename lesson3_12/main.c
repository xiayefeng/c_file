#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void fn();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

const double a = 3.0;
int main(int argc, char *argv[]) {
	double x,y;
	fn();
	printf("��������ÿ��������ֱ��������ֹ��־ -100 Ϊֹ��\n");
	scanf("%lf", &x);
	while(x!= -100){
		if(x<=0) y = sqrt(a*a + x*x);
		else y= 3*pow(a, 3)*x*x + 4*a*x -1;
		printf("x=%6.2lf, y=%6.2lf\n", x, y);
		scanf("%lf", &x);
	}
	return 0;
}
