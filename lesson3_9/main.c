#include <stdio.h>
#include <stdlib.h>
#define NM 10
void printSubNum();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, n=0, c=0;
	printSubNum();
	printf("������ %d ������:\n", NM);
	do{
		scanf("%d", &x);
		if(x>=30 && x<=60 ) c++;
	}while(++n < NM);
	printf("30~60��Χ�ڵ�����������%d\n", c);
	return 0;
}
