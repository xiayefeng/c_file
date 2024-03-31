#include <stdio.h>
#include <stdlib.h>

#define Num 50

void searchStr();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[Num],ch;
	int c1, c2, c3, i;

	c1=c2=c3=0;
	printf("输入一行字符, 以回车结束!\n");
	gets(a);
	printf("输入一个字符：");
	ch = getchar();
	i=0;
	while (a[i]) {
		if(a[i] > ch) c1++;
		else if(a[i] == ch) c2++;
		else c3++;
		i++;
	}
	printf("c1=%d, c2=%d, c3=%d\n", c1, c2, c3);
	searchStr();
	return 0;
}
