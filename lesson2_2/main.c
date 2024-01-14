#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,rem;
	printf("输入一个整数:");
	scanf("%d", &num);
	do{
		rem = num % 10;
		num /=10;
		printf("%d", rem);
	}while(num >0);
	printf("\n");
	return 0;
}
