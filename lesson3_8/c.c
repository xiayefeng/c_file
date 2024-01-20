#include <stdio.h>
void getMaxN(int n) {
    int i=0;
    double s = 0;
    while(s<=n) {
        i++;
        s+= 1.0 /i;
    }
    printf("n=%d\n", i-1);
}
