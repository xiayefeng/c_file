#include <stdio.h>
#include <stdlib.h>

void ltoh(int n);
void htol(int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;

	printf("����һ��5λ��ʮ������������");

	scanf("%d",&n);

	printf("\n�ӵ�λ����λ�������ĸ�λ����Ϊ:");

	ltoh(n);

	printf("\n");

	printf("\n�Ӹ�λ����λ�������ĸ�λ����Ϊ:");

	htol(n);

	printf("\n");

	return 0;
}
