#include <stdio.h>
#define N 11
void getTaxMoney(){
	double a[N] = {0, 3000, 4000, 5000, 6000, 8000, 10000, 15000, 20000, 30000, 1e9};
	double b[N] = {0, 0, 0.05, 0.10, 0.15, 0.20, 0.25, 0.30, 0.35, 0.40, 0.45};
	double x, y;
	int i,j;
	printf("����һ���˵��¹������루��λ\" Ԫ\"��: ");
	do scanf("%lf", &x); while (x<0);
	for(i=1;i<N;i++){
		if(x <= a[i]) break;
	}
	y=(x-a[i-1])*b[i];
	for(j=i-1;j>=1;j--) y+= (a[j]-a[j-1])*b[j];
	printf(" �¹������룺 %10.2lf\n", x);
	printf(" �¹�������˰�� %10.2lf\n", y);
	printf(" ˰��ʵ�ý��: %10.2lf\n", x-y);
	
}
