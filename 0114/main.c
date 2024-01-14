#include <stdio.h>
#include <stdlib.h>
#define M -1

const int N = 10;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void calcFn();

int main() {
	int x,y,i;
	printf("请输入一个整数:");
	scanf("%d", &x);
	if(x<N) y= M*x +1;
	else y=(x+M)*x -3;
	printf("x=%d, y=%d\n", x, y);
//	for(i=0;i<10;i++){
		calcFn();
//	}
	
	return 0;
}
