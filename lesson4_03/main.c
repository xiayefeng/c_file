#include <stdio.h>
#include <stdlib.h>

#define Num 50
#define M1 10
#define N1 30

void searchStr();
void SelectSort(char a[M1][N1]);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[Num],ch;
	int c1, c2, c3, i;
	char b[M1][N1] = {""};

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
	printf("输入%d 个字符串:\n", M1);
	for(i=0;i<M1;i++)  scanf("%s", b[i]);
	
	SelectSort(b);
	printf("排序结果:\n");
	for(i=0;i<M1;i++) printf("%s\n", b[i]);
	return 0;
}
