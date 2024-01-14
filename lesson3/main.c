#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year;
	printf("输入任一个年份:");
	scanf("%d", &year);
	if((year %4 ==0 && year %100 != 0) || (year % 400 == 0)){
		printf("%d年是公历闰年!\n", year);
	}else{
		printf("%d年不是公历闰年!\n", year);
	}
	return 0;
}
