#include <stdio.h>
#include <stdlib.h>

struct AAA {
	int a[10];
	int n;
};

struct AAA x;

void copyStr();
void copyStruct();
void printWorkerPay();
void printMaxAgeName();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int b[6] = {20, 35, 46, 18, 24, 52};
	x.n = 6;
	for(i=0; i<x.n; i++) {
		x.a[i] = b[i];
	}
	x.a[x.n] = 37;
	x.n++;
	for(i=0;i<x.n;i++) printf("%d ", x.a[i]);
	printf("\n");
	copyStr();
	copyStruct();
	printWorkerPay();
	printMaxAgeName();
	return 0;
}
