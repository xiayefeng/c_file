#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    double a,b,c,d,x1,x2;
    printf("����һԪ���η��̵Ķ�����ϵ����һ����ϵ���ͳ�����:");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a==0.0) {
        printf("������ϵ������Ϊ0\n");
        exit(1);
    }
    d = b*b-4*a*c;
    if(d<0.0) {
        printf("�˷���û��ʵ����");
        exit(1);
    }
    if(d==0.0) {
        x1=x2=-b/(2*a);
    } else {
        x1 = (-b+sqrt(d))/(2*a);
        x2 = (-b-sqrt(d))/(2*a);
    }
    printf("�˷��̵�������Ϊ��%lf �� %lf\n", x1, x2);
    return 0;
}
