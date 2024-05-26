#include <stdio.h>
#include <stdlib.h>
#define N 10

int AA=5;
const int BB=8;

static int CC =12;
static const int DD = 23;

int xk1(int n);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=3;
	int i;
	int a[N]={3,8,12,20,15,6,7,24,8,19};
	for(i=0;i<N/2;i++){
		int x=a[i];
		a[i]=a[N-i-1];
		a[N-i-1] =x;
	}
	for(i=0;i<N;i++) printf("%d ", a[i]);
	printf("\n");
	
	printf("AA=%d, BB=%d\n", AA, BB);
	printf("CC=%d, DD=%d\n", CC, DD);
	printf("%d*(%d+%d+%d+%d)=%d\n", x, AA, BB, CC, DD,xk1(x));
	return 0;
}

int xk1(int n) {
	int x;
	x=n*(AA+BB+CC+DD);
	return x;
}
