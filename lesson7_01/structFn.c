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
	printf("从键盘输入具有Person 结构的%d个记录: \n", n);
	printf("每个记录包括 姓名、性别(m或f)、年龄、学历和工资：\n");
	for(i=0; i<n; i++) {
		scanf("%s %c %d %s %f", x.name, &x.sex, &x.age, x.educ, &x.pay);
		a[i]=x;
	}
}

void output(int n) {
	int i;
	printf("显示具有Person结构的%d个记录:\n", n);
	for(i=0; i<n; i++) {
		printf("%-10s", a[i].name);
		if(a[i].sex == 'm') printf("%-4s", "男");
		else printf("%-4s", "女");
		printf("%-3d %-10s", a[i].age, a[i].educ);
		
		printf("%-7.2f\n", a[i].pay);
	}
}






