#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.1415926

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
    double radius, girth, area;
    printf("����һ��Բ�İ뾶��");
    scanf("%lf", &radius);
    girth=2*PI*radius;
    area=PI*pow(radius, 2);
    printf("radius: %lf\n", radius);
    printf("girth: %lf\n", girth);
    printf("area: %lf\n", area);
}
