#include <stdio.h>
#include <stdlib.h>
void trans(int x);
void trans2(int x);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int d;
	printf(" �Ӽ�������һ��ʮ����������:");
	do scanf("%d", &d); while (d <0);
	trans(d);
	trans2(d);
	return 0;
}
