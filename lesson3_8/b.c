#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void getSingalNum() {
    int i = 10;
    srand(time(0));
    while(i>0) {
        int a,j,k;
        a= rand() % 190 +10;
        k = (int)(sqrt(a) + 1e-5);
        for(j = 2; j<=k; j++) {
            if(a%j==0) break;
        }
        if(j>k) {
            printf("%d ", a);
            i--;
        }
    }
    printf("\n");
}
