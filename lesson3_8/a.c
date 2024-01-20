#include <stdio.h>

// 求最大公约数 
void getBigDevice() {
    int a, b;
    printf("请输入两个正整数:");
    scanf("%d %d", &a, &b);
    while(a <=0 || b<=0) {
        printf("重新输入:");
        scanf("%d %d", &a, &b);
    }
    while(b) {
        int r = a%b;
        a=b;
        b = r;
    }
    printf("%d\n", a);
}
