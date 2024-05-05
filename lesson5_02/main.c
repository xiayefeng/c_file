#include <stdio.h>
#include <stdlib.h>

void selectSort(int *a, int n);
void printRect();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	unsigned int i,n;
	unsigned int *a;
	printf("������һ�����������:");
	scanf("%d", &n);
	a=calloc(n, sizeof(unsigned int));
	if(a== NULL) {
		printf("��̬�洢����ʧ��!\n");
		exit(1);
	}
	printf("����%d��ְ��������:\n", n);
	for(i=0; i<n; i++) scanf("%d", a+i);
	for(i=0; i<n; i++) printf("%d ", a[i]);
	printf("\n");
	printf("���������ְ������: ");
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
