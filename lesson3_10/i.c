#include <stdio.h>
void printNum6() {
    int i;
    for(i=10; i<=16; i++) {
        int j=2, k=i;
        printf("%d:", i);
        do {
            while(k%j==0) {
                printf("%d ", j);
                k/=j;
            }
            j++;
        }while(k>=j);
        printf("\n");
    }
}
