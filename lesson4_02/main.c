#include <stdio.h>
#include <stdlib.h>

#define n 10

void insertSort(int [], int);

int a[n] = {42, 65, 80, 74, 36, 44, 28, 65, 94, 72};

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
    printf("排序前数组中原始内容:\n");
    for(i = 0; i<n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
//    selectSort();
    insertSort(a, n);
    printf("排序后数组中原始内容:\n");
    for(i=0; i<n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
