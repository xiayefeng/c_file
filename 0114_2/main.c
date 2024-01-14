#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
* rand()%100      返回 0～99区间内的随机整数 
* 10 + rand()%90  得到[10, 99] 区间内的随机整数 
* a + rand()%b    得到[a, a+b-1] 区间内的随机整数 
* rand()%100/100.0   得到 0.00 ~ 0.99 区间内的两位随机小数
* rand()%90/10.0+1   得到 1.0~ 9.9 区间内的有一位小数的实数 
*
*
*/
void main(){
	int x,y,z;
	srand(time(0));
	x=rand()%100;
	y=rand()%100;
	printf("%d+%d=", x, y);
	scanf("%d", &z);
	if(x+y == z) printf("计算正确! \n");
	else printf("计算错误!\n");
}
