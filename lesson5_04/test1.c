#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printAvgNum() {
	int i,m,*a,s=0;
	srand(time(0));
	printf("请输入一个整数数组的长度:");
	scanf("%d", &m);
	a=calloc(m, sizeof(int));
	for(i=0; i<m; i++) {
		a[i]=rand()%100;
		s+=a[i];
		printf("%d ", a[i]);
	}
	printf("\n总和:%d; 平均值：%5.2lf\n",s, s*1.0/m);
}

