#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i,j,s = 0;
    for(i=1; i<=M; i++)
        for(j=1; j<=N; j++)
            s+=i*j;
    printf("%d\n", s);

    s = 1;
    for(i=2; i<=50; i+=2) s+=i*i;
    printf("s=%d\n", s);
    return 0;
}
