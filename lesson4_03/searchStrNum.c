#include <stdio.h>
#include<string.h>

void searchStr() {
    char a[10][30];
    char s[30];
    int i, k =0;
    printf("����10���ַ���:\n");
    for(i=0; i<10; i++) {
    	printf("%d\n", i);
        scanf("%s", a[i]);s
    }
    printf("����һ�������ַ���:");
    scanf("%s", s);
    for(i=0; i<10; i++) {
        if(strcmp(a[i], s)==0) k++;
    }
    printf("��ͬ���ַ�������: %d\n", k);
}
