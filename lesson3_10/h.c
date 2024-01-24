#include <stdio.h>
const int B = 2;
void pirntNum5() {
    int i=0,p=1,s=1;
    while(s<100) {
        i++;
        p*=B;
        s+=p;
    }
    printf("i=%d\n", i);
    printf("s=%d\n", s);

}
