#include <stdio.h>
#include <stdlib.h>

/*�ӵ�λ����λ���*/
void ltoh(int n) {
	if(n!=0) {
		printf("%d ",n%10);
		n=n/10;
		ltoh(n);
	}
}

/*�Ӹ�λ����λ���*/
void htol(int n) {
	if(n>=10) {
		htol(n/10);
	}
	printf("%d ",n%10);
}
