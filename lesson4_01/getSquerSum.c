#include <stdio.h>
#define N 3
void getSquerSum(){
	int a[N][N] = {{7, -5, 3},{2, 8, -6},{1, -4, -2}};
	int b[N][N] = {{3, 6, -9},{2, -8, 3},{5, -2, -7}};
	int c[N][N];
	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			c[i][j] = a[i][j]+b[i][j];
		}
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%5d", c[i][j]);
		}
		printf("\n");
	}
}

void statisticPick(){
	int i, a[6] = {0};
	printf("����������ÿ��ѡƱ����Ͷ��ѡ�˵Ĵ���: \n");
	scanf("%d", &i);
	while (i!= -1){
		if(i>=1 && i<= 5) a[i]++;
		scanf("%d", &i);
	}
	printf("ѡƱͳ�����! ÿλ����Ʊ������: \n");
	for(i=1;i<=5;i++) printf("%d ��: %d ��Ʊ \n", i, a[i]);
}
