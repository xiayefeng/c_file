#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,z, c=0;
	printf("请输入两个整数: ");
	scanf("%d %d", &x, &y);
	printf("%d + %d = ", x, y); scanf("%d", &z); if(x+y==z) c++;
	printf("%d - %d = ", x, y); scanf("%d", &z); if(x-y==z) c++;
	printf("%d * %d = ", x, y); scanf("%d", &z); if(x*y==z) c++;
	printf("%d / %d = ", x, y); scanf("%d", &z); if(x/y==z) c++;
	printf("%d %% %d = ", x, y); scanf("%d", &z); if(x%y==z) c++;
	printf(" 共5道题, 答对%d道题\n", c);
	return 0;
}
