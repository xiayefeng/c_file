#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printAvgNum() {
	int i,m,*a,s=0;
	srand(time(0));
	printf("������һ����������ĳ���:");
	scanf("%d", &m);
	a=calloc(m, sizeof(int));
	for(i=0; i<m; i++) {
		a[i]=rand()%100;
		s+=a[i];
		printf("%d ", a[i]);
	}
	printf("\n�ܺ�:%d; ƽ��ֵ��%5.2lf\n",s, s*1.0/m);
}

