#include <stdio.h>

#define N 3
#define M 5

typedef struct ClassGrade {
	char num[N][10];
	char name[N][10];
	int a[N][M];
	int sum[N];
	float mean[M];
} ClassGrade;

void Input(ClassGrade* x, int n, int m) {
	int i,j;
	printf("从键盘上输入 %d个学生的学号、姓名及 %d门课程的成绩：\n", n, m);
	for(i=0; i<n; i++) {
		scanf("%s %s", x->num[i], x->name[i]);
		for(j=0; j<m; j++) {
			scanf("%d", &(x->a[i][j]));
		}
	}
}

void Calculate(ClassGrade* x, int n, int m) {
	int i, j;
	for(i=0; i<n; i++) {
		x->sum[i] = 0;
		for(j=0; j<m; j++) x->sum[i] += x->a[i][j];
	}
	for(i=0; i<m; i++) {
		x->mean[i]=0;
		for(j=0; j<n; j++) x->mean[i]+= x->a[j][i];
		x->mean[i]/=n;
	}
}

void OutPut(ClassGrade* x, int n, int m) {
	int i,j;
	for(i=0; i<n; i++) {
		printf("%-10s %-10s", x->num[i], x->name[i]);
		for(j=0; j<m; j++) printf("%4d", x->a[i][j]);
		printf("%4d\n",x->sum[i]);
	}
	printf("\n课程平均成绩:");
	for(i=0; i<M; i++) printf("%7.2f", x->mean[i]);
	printf("\n");
}




