#include <stdio.h>
#include <stdlib.h>
#define M 10

void testFn();
void findMinNum();
void getRowSum();
void getSquerSum();
void statisticPick();
void getScoreMoney();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[8] = {25, 64, 38, 40, 75, 66, 38, 54};
	int i, max=a[0];
	int b[M+1];
	testFn();
	findMinNum();
	getRowSum();
	getTaxMoney();
	getSquerSum();
	statisticPick();
	getScoreMoney();
	b[0]=1; b[1]=2;
	for(i=2; i<=M; ++i){
		b[i] = b[i-1] + b[i-2];
	}
	for(i=0; i<M; ++i){
		printf("%d, ", b[i]);
	}
	printf("%d\n", b[M]);
	for(i=1; i<8;i++){
		if(a[i] > max) max=a[i];
	}
	printf("max: %d\n", max);
	return 0;
}
