#include <stdio.h>
#include <stdlib.h>

void selectSort(int *a, int n);
void printRect();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned int i,n;
	unsigned int *a;
	printf("请输入一个班组的人数:");
	scanf("%d", &n);
	a=calloc(n, sizeof(unsigned int));
	if(a== NULL) {
		printf("动态存储分配失败!\n");
		exit(1);
	}
	printf("输入%d个职工的年龄:\n", n);
	for(i=0; i<n; i++) scanf("%d", a+i);
	for(i=0; i<n; i++) printf("%d ", a[i]);
	printf("\n");
	printf("按升序输出职工年龄: ");
	selectSort(a, n);
	for(i=0; i<n; i++) printf("%d ", a[i]);
	printf("\n");
	free(a);
	printRect();
	return 0;
}

void selectSort(int *a, int n) {
	int i,j,k,x;
	for(i=1; i<n; i++) {
		k=i-1;
		for(j=i; j<n; j++) {
			if(a[j]<a[k]) k=j;
		}
		if(k!=i-1) {
			x=a[i-1];
			a[i-1]=a[k];
			a[k]=x;
		}
	}
}
