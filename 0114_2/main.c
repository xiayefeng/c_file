#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
* rand()%100      ���� 0��99�����ڵ�������� 
* 10 + rand()%90  �õ�[10, 99] �����ڵ�������� 
* a + rand()%b    �õ�[a, a+b-1] �����ڵ�������� 
* rand()%100/100.0   �õ� 0.00 ~ 0.99 �����ڵ���λ���С��
* rand()%90/10.0+1   �õ� 1.0~ 9.9 �����ڵ���һλС����ʵ�� 
*
*
*/
void main(){
	int x,y,z;
	srand(time(0));
	x=rand()%100;
	y=rand()%100;
	printf("%d+%d=", x, y);
	scanf("%d", &z);
	if(x+y == z) printf("������ȷ! \n");
	else printf("�������!\n");
}
