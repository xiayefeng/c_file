#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 30

void printStr() {
	int i,m;
	char x[N];
	char(*a)[N];
	printf("�Ӽ���������������ַ����ĸ���:");
	scanf("%d", &m);
	a=calloc(m*N, sizeof(char));
	printf("�Ӽ��������� %d ���ַ���: \n", m);
	for(i=0; i<m; i++) scanf("%s", a[i]);
	printf("�Ӽ�������������ҵ�һ���ִ�:");
	scanf("%s", x);
	for(i=0; i<m; i++) {
		if(strstr(a[i], x) != NULL) printf("%s\n", a[i]);
	}
}

