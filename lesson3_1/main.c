#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    double a,b,c,d,x1,x2;
    printf("输入一元二次方程的二次项系数、一次项系数和常数项:");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a==0.0) {
        printf("二次项系数不能为0\n");
        exit(1);
    }
    d = b*b-4*a*c;
    if(d<0.0) {
        printf("此方程没有实数跟");
        exit(1);
    }
    if(d==0.0) {
        x1=x2=-b/(2*a);
    } else {
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
    }
    printf("此方程的两个跟为：%lf 和 %lf\n", x1, x2);
    return 0;
}
