#include <stdio.h>
int getNeedYear(double N) {
    double x, y;
    int n;
    for(x = 0.02; x<0.21; x+=0.02) {
        n=0;
        y=1;
        while(y<N + 1e-6) {
            n++;
            y*=1+x;
        }
        printf("%5.2Lf%% %2d %5.2Lf\n", x*100, n, y);
    }
    return n;
}
