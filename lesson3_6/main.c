#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int n,x,max,min;
    int a,b;

    printf(" 输入待处理数据的个数:");
    scanf("%d", &n );
    for(; n<=0;) {
    	printf("输入值要大于等于1,重输:");
    	scanf("%d", &n);
	}
	printf(" 从键盘上输入%d个待处理数据！\n", n);
	scanf("%d", &x);
	max=min=x;
	for(;--n;){
		scanf("%d", &x);
		if(x>max) max = x;
		if(x<min) min =x;
	}
    printf("max:%d, min:%d\n", max, min);
    for(a=0,b=1;a<10; a=a+b,b=a+b)
      printf("%d %d ", a, b);
    printf("%d %d\n", a, b);  

    return 0;
}
