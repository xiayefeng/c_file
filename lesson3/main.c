#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year;
	printf("������һ�����:");
	scanf("%d", &year);
	if((year %4 ==0 && year %100 != 0) || (year % 400 == 0)){
		printf("%d���ǹ�������!\n", year);
	}else{
		printf("%d�겻�ǹ�������!\n", year);
	}
	return 0;
}
