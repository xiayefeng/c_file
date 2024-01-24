#include <stdio.h>
#include <math.h>
double Newton(double x) {
    double x1,x2,y1,y2;
    x2=x;
    do {
        x1=x2;
        y1= exp(x1) + 3*x1 -2;
        y2= exp(x1) + 3;
        x2 = x1-y1/y2;
    } while(fabs(x2-x1) > 0.001);
    return x2;
}
