#include <stdio.h>
#include <stdlib.h>

int sum(int a[], int n);
int f(int n);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int b[8]={5,16,7,9,20,13,18,6};
	int s=sum(b, 8);
	int m,k;
	
	printf("s=%d\n", s);
	
	do{
		printf("����m ��k ��ֵ��m>=k��:");
		scanf("%d %d", &m, &k);
		if(m>0 && k>0 && m>= k) break;
		else printf("�������ݲ���ȷ�����䣡\n");
	}while(1);
	printf("���%d��������ͬ��Ԫ����ÿ��ȡ��%d��Ԫ�ص������\n", m, k);
	printf("c(%d, %d)=", m,k);
	printf("%4.0f\n", f(m)*1.0 /(f(k)*f(m-k)));
	return 0;
}
