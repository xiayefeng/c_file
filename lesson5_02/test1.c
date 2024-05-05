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
	printf("����%d��%d�еľ�������:\n", LN, CN);
	for(i=0; i<LN; i++) {
		for(j=0; j<CN; j++) {
			scanf("%d", &pa[i][j]);
		}
	}
	printf("\n");
	printf("���paָ����ָ��Ķ�̬��ά�����е�����:\n");
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
