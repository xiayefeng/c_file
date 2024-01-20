#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) {
    char k;
    int x,y,z;
    int b =0;
    srand(time(0));
    x = rand() % 50 +1;
    y= rand() %10 +1;
    printf("输入一个算术运算符(+,-,*,/,%%): ");
    scanf("%c", &k);
    if(k!= '+'&& k!= '-'&& k!= '*'&& k!= '/'&& k!='%') {
        printf("运算符输入错误!\n");
        exit(1);
    }
    printf("%d%c%d=", x,k,y);
    scanf("%d",&z);
    switch(k) {
        case '+':
            if(z== x+y) b= 1;
            break;
        case '-':
            if(z== x-y) b= 1;
            break;
        case '*':
            if(z== x*y) b= 1;
            break;
        case '/':
            if(z== x/y) b= 1;
            break;
        case '%':
            if(z== x%y) b= 1;
            break;
    }
    if(b) printf("calculation right\n");
    else printf("calculation error\n");
}
