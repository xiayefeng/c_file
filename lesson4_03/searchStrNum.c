#include <stdio.h>
#include<string.h>

void searchStr() {
    char a[10][30];
    char s[30];
    int i, k =0;
    printf("输入10个字符串:\n");
    for(i=0; i<10; i++) {
    	printf("%d\n", i);
        scanf("%s", a[i]);s
    }
    printf("输入一个待查字符串:");
    scanf("%s", s);
    for(i=0; i<10; i++) {
        if(strcmp(a[i], s)==0) k++;
    }
    printf("相同的字符串个数: %d\n", k);
}
