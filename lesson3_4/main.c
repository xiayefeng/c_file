#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
    int x;
    int i,n; double p=1;
    printf(" ����0~15�е�һ������:");
    scanf("%d", &x);
    if(x<0 || x>15) {
        printf("�������ݲ���ȷ!\n");
        exit(1);
    }
    switch(x) {
    	case 10: printf("%c", 'A');break;
    	case 11: printf("%c", 'B');break;
    	case 12: printf("%c", 'C');break;
    	case 13: printf("%c", 'D');break;
    	case 14: printf("%c", 'E');break;
    	case 15: printf("%c", 'F');break;
    	default : printf("%c", x+48);break;
	}
	printf("\n"); 
	printf(" ����һ��������,����׳�:");
	scanf("%d", &n );
	for(i=1;i<=n;i++) p*= i;
	printf("%d!=%10.0Lf\n", n, p);
}
