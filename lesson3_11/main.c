#include <stdio.h>
#include <stdlib.h>

double f1(int n);
double fn3(int n);
int fn4();
void getNumAssic();
int minDouble(int, int);
int maxDevide(int, int);
void calcNum();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("3��n����֮��Ϊ: %Lf\n", fn3(10));
	printf                                                                                                    ("С��1000��ż��ƽ�����������: %d\n", fn4());
	getNumAssic();
	printf("����������������");
	do scanf("%d %d", &b, &c); while(b<=0 || c<=0);
	printf("%d��%d�����Լ����%d\n", b, c, maxDevide(b, c));
	printf("%d��%d����С��������%d\n", b, c, minDouble(b, c));
	
	printf("����һ�����ڵ���2������:");
	do scanf("%d", &a); while(a<=1);
	printf("%Lf\n", f1(a)); 
	calcNum();
	return 0;
}
