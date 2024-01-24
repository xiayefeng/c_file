#include <stdio.h>
void printNum7(){
	int x, y;
	int i=2,p=1;
	printf("请输入两个正整数x和y: ");
	scanf("%d %d", &x, &y);
	do{
		while(x%i==0 && y%i==0){
			p*=i;
			x/=i;
			y/=i;
		}
		i++;
	}while(x>=i && y>=i);
	printf("x和y的最小公倍数为%d\n", p*x*y);
}
