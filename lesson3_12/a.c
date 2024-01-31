#include <stdio.h>

void fn() {
    int a,b;
    for(a=7; a<=25; a++) {
        for(b=16; b<=22; b+=2) {
            if(2*a+5*b == 126) {
                printf("(%d, %d)\n", a, b);
            }
        }
    }
}
