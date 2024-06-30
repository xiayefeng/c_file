#include <stdio.h>
#include <stdlib.h>

void ltoh(int n);
void htol(int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;

	printf("输入一个5位的十进制正整数：");

	scanf("%d",&n);

	printf("\n从低位到高位逐次输出的各位数字为:");

	ltoh(n);

	printf("\n");

	printf("\n从高位到低位逐次输出的各位数字为:");

	htol(n);

	printf("\n");

	return 0;
}
