#include <stdio.h>
#include <stdlib.h>

#define n 10
#define Num 8


void insertSort(int [], int);
int sequentialSearch(int a[], int , int x);
int binarySearch(int a[], int, int x);

int a[n] = {42, 65, 80, 74, 36, 44, 28, 65, 94, 72};

int a2[Num] = {36, 25, 48, 12, 65, 43, 20, 58};

void selectSort() {
    int i,j,k,x;
    for(i=1; i<n; i++) {
        k=i-1;
        for(j=i; j<n; j++) {
            if(a[j]<a[k]) k=j;
        }
        x=a[i-1];
        a[i-1] = a[k];
        a[k] = x;
    }
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int i;
    int a3[n] = {42, 55, 73, 28, 48, 66, 30, 65, 94, 72};
    int x, y;
    
    int a4[n] = {12, 23, 26, 37, 54, 60, 68, 75, 82, 96};
    int x1=23, x2 = 68, x3= 50;
    
    printf("����ǰ������ԭʼ����:\n");
    for(i = 0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    selectSort();

    printf("�����������ԭʼ����:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    printf("\n");
    printf("����ǰ������ԭʼ����:\n");
    for(i = 0; i<Num; i++) {
        printf("%d ", a2[i]);
    }
    printf("\n");
    insertSort(a2, Num);
    printf("�����������ԭʼ����:\n");
    for(i=0; i<Num; i++)
        printf("%d ", a2[i]);

    printf("\n");
    
    y=binarySearch(a4, n, x1);
    if(y!= -1)
      printf("���ַ�����ֵΪ %d ��Ԫ�سɹ�! �±�λ��Ϊ %d\n", x1, y);
    else
	  printf("���ַ�����ֵΪ %d ��Ԫ��ʧ�ܣ�\n", x1);  
	
    y=binarySearch(a4, n, x2);
    if(y!= -1)
      printf("���ַ�����ֵΪ %d ��Ԫ�سɹ�! �±�λ��Ϊ %d\n", x2, y);
    else
	  printf("���ַ�����ֵΪ %d ��Ԫ��ʧ�ܣ�\n", x2);
	  
	y=binarySearch(a4, n, x3);
    if(y!= -1)
      printf("���ַ�����ֵΪ %d ��Ԫ�سɹ�! �±�λ��Ϊ %d\n", x3, y);
    else
	  printf("���ַ�����ֵΪ %d ��Ԫ��ʧ�ܣ�\n", x3);      
    
    while(1){
    	printf("�Ӽ���������һ�������ҵ�����(С�ڵ���0�����):");
    	scanf("%d", &x);
    	if(x<=0) {
    		printf("�������н���!\n");
    		return;
		}
		y= sequentialSearch(a3, n, x);
		if(y== -1) printf("���� %d ����ʧ��!\n", x);
		else printf("���� %d ���ݳɹ�! �±�Ϊ %d\n", x, y);
	}
    
    return 0;
}
