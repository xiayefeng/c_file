#include <stdio.h>

#define N 10


struct Person {
	char name[10];
	char sex;
	int age;
	char educ[10];
	float pay;
};

struct Person a[N];

void input(int n) {
	int i;
	struct Person x;
	printf("�Ӽ����������Person �ṹ��%d����¼: \n", n);
	printf("ÿ����¼���� �������Ա�(m��f)�����䡢ѧ���͹��ʣ�\n");
	for(i=0; i<n; i++) {
		scanf("%s %c %d %s %f", x.name, &x.sex, &x.age, x.educ, &x.pay);
		a[i]=x;
	}
}

void output(int n) {
	int i;
	printf("��ʾ����Person�ṹ��%d����¼:\n", n);
	for(i=0; i<n; i++) {
		printf("%-10s", a[i].name);
		if(a[i].sex == 'm') printf("%-4s", "��");
		else printf("%-4s", "Ů");
		printf("%-3d %-10s", a[i].age, a[i].educ);
		
		printf("%-7.2f\n", a[i].pay);
	}
}






