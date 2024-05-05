#include <stdio.h>
#include <stdlib.h>

void printAvgNum();
void printNum();
void printStr();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[8];
	int s1=0,s2=0,*p;
	printf("请输入8个整数:");
	for(p=a;p<a+8;p++) scanf("%d", p);
	for(p=a;p<a+8;p++){
		if(*p %2) s1+=*p;
		else s2+= *p;
	}
	printf("%d %d\n", s1, s2);
	printAvgNum();
	printNum();
	printStr();
	return 0;
}
