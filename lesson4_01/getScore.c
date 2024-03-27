#include <stdio.h>
#include <stdlib.h>
#define Num 20

void getScoreMoney() {
    double a[Num] = {0.0};
    int c[11]= {0};
    int i,j;
    double x;
    printf("输入一批职工的工资数据(以0或负数结束): \n");
    while(i<Num) {
        scanf("%lf", &x);
        if(x<= 0.0) {
            printf("数据输入完毕!\n");
            break;
        }
        a[i++] = x;
    }
    if(i >= Num) {
        printf("数据输入太多，应增加Num的值！\n");
        exit(1);
    }
    for(j=0; j<i; j++) {
        if(a[j] < 20000) c[(int)a[j]/2000]++;
        else c[10]++;
    }
    for(j=0; j<10; j++) {
        printf("%8.2lf---%8.2lf: ", j*2000.0, j*2000.0 + 1999.99);
        printf("%d, %5.2lf%%\n", c[j], c[j]*1.0/i*100);
    }
    printf("20000.00 及以上：   ");
    printf("%d, %5.2lf%%\n", c[10], c[10]*1.0/i*100);
}
