#include <stdio.h>
void printNum7(){
	int x, y;
	int i=2,p=1;
	printf("����������������x��y: ");
	scanf("%d %d", &x, &y);
	do{
		while(x%i==0 && y%i==0){
			p*=i;
			x/=i;
			y/=i;
		}
		i++;
	}while(x>=i && y>=i);
	printf("x��y����С������Ϊ%d\n", p*x*y);
}
