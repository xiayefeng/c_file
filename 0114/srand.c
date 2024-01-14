#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calcFn(){
	int x,y,z;
	srand(time(0));
	x=rand()%100;
	y=rand()%100;
	printf("%d+%d=", x, y);
	scanf("%d", &z);
	if(x+y == z) printf("计算正确! \n");
	else printf("计算错误!\n");
	
}
