#include <stdio.h>
void printSubNum(){
	int i=2,x;
	printf("������һ��������x,��С��3�����䣺");
	do scanf("%d", &x); while (x<=2);
	do{
		while(x%i== 0) {printf("%d ", i); x/=i;
		}
		i++;
	} while(i<=x);
	printf("\n");
}
