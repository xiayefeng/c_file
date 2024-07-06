#include <stdio.h>
#include <stdlib.h>
#define N 3
#define M 5

typedef struct ClassGrade {
	char num[N][10];
	char name[N][10];
	int a[N][M];
	int sum[N];
	float mean[M];
} ClassGrade;

void input(int n);
void output(int n);

void Output(int n);
void Rang(int n);

void Input(ClassGrade* x, int n, int m);
void Calculate(ClassGrade* x, int n, int m);
void OutPut(ClassGrade* x, int n, int m);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//	int n;
//	printf("请输入一个正整数表示待处理记录的个数(1-10):");
//	scanf("%d", &n);
//	input(n);
//	output(n);

    ClassGrade x;
    
	Output(5);
	Rang(5);
	Output(5);
    
    Input(&x, N, M);
    Calculate(&x, N, M);
    OutPut(&x, N, M);
    
	return 0;
}
