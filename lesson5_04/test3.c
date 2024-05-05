#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 30

void printStr() {
	int i,m;
	char x[N];
	char(*a)[N];
	printf("从键盘上输入待处理字符串的个数:");
	scanf("%d", &m);
	a=calloc(m*N, sizeof(char));
	printf("从键盘上输入 %d 个字符串: \n", m);
	for(i=0; i<m; i++) scanf("%s", a[i]);
	printf("从键盘上输入待查找到一个字串:");
	scanf("%s", x);
	for(i=0; i<m; i++) {
		if(strstr(a[i], x) != NULL) printf("%s\n", a[i]);
	}
}

