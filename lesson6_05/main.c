#include <stdio.h>
#include <stdlib.h>

typedef void VD(int* , int*);

void swop(int* x, int* y) {
	int w = *x;
	*x=*y;
	*y=w;
}

int selectMax(int a[], int n1, int n2) {
	int i, k=n1;
	for(i=n1+1; i<=n2; i++) {
		if(a[i]> a[k]) k=i;
	}
	return k;
}

void selectSort(int a[], int n, VD *ff){
	int i,k;
	for(i=0;i<=n-2;i++){
		k=selectMax(a, i, n-1);
		ff(&a[i], &a[k]);
	}
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, a[8] = {34,25,68,50,76,13,45,64};
	selectSort(a, 8, swop);
	for(i=0;i<8;i++) printf("%d ", a[i]);
	printf("\n");
	return 0;
}
