#include <stdio.h>
void printSubNum(){
	int i=2,x;
	printf("请输入一个整数到x,若小于3则重输：");
	do scanf("%d", &x); while (x<=2);
	do{
		while(x%i== 0) {printf("%d ", i); x/=i;
		}
		i++;
	} while(i<=x);
	printf("\n");
}
