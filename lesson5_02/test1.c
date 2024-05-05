#include <stdio.h>
#include <stdlib.h>

#define LN 4
#define CN 5

void printRect() {
	int i,j;
	int** pa;
	pa=calloc(LN, sizeof(int*));
	for(i=0; i<LN; i++) {
		pa[i]=calloc(CN, sizeof(int));
	}
	printf("输入%d行%d列的矩阵数据:\n", LN, CN);
	for(i=0; i<LN; i++) {
		for(j=0; j<CN; j++) {
			scanf("%d", &pa[i][j]);
		}
	}
	printf("\n");
	printf("输出pa指针所指向的动态二维数组中的数据:\n");
	for(i=0; i<LN; i++) {
		for(j=0; j<CN; j++) {
			printf("%5d", pa[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<LN;i++) free(pa[i]);
	free(pa);
}
