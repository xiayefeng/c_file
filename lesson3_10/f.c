#include <stdio.h>
void printNum3(){
	int s0, s1,s2,x;
	s0=s1=s2=0;
	printf(" �Ӽ�������һ����������-1��������\n");
	scanf("%d", &x);
	while(x!= -1){
		switch(x%3){
			case 0: s0+=x;break;
			case 1: s1+=x;break;
			case 2: s2+=x;break;
		}
		scanf("%d", &x);
	}
	printf("s0=%d, s1=%d, s2=%d\n", s0, s1, s2);
}
