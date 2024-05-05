#include <stdio.h>
#include <stdlib.h>

void printList();
void printStr();
void printNum2();
void printNum();
void printNum3();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[8] = {25, 18,36,42,17,54,30,63};
	int *p=a;
	int c2,c3,c5;
	c2=c3=c5=0;
	while(p<a+8) {
		if(*p%2==0) c2++;
		if(*p%3==0) c3++;
		if(*p%5==0) c5++;
		p++;
	}
	printf("%d %d %d\n", c2, c3, c5);
	printList();
	printStr();
	printNum2();
	printNum();
	printNum3();
	return 0;
}
