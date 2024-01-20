#include <stdio.h>
#include <stdlib.h>
void getBigDevice();
void getSingalNum();
void getMaxN(int n);
int getNeedYear(double);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, c1=0, c2 = 0;
	getBigDevice();
	getSingalNum();
	getMaxN(5);
	getNeedYear(4.0);
	printf(" 依次输入若干个整数，输入负数时结束:\n");
	scanf("%d", &x);
	while(x>= 0){
		if(x < 60) c1++; else c2++;
		scanf("%d", &x);
	}
	printf("c1=%d, c2=%d\n", c1, c2);
	return 0;
}
