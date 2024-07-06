#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char num[8];
	char name[10];
	short int grade;
};

typedef struct Student Student;

Student a[5] = {{"cs102", "��ƽ", 78}, {"ch231", "������", 69}, {"ec115", "����", 82},{"pt327", "����", 72},{"bx214", "����Զ", 65}};

void Output(int n) {
	int i;
	printf("��ʾ����Student �ṹ��%d ����¼: \n", n);
	for(i=0; i<n; i++) {
		printf("%-8s %-10s %hd\n", a[i].num, a[i].name, a[i].grade);
	}
	printf("\n");
}

void Rang(int n) {
	int i,j,k;
	for(i=1; i<n; i++) {
		k=i-1;
		for(j=i; j<n; j++) {
			if(strcmp(a[j].num, a[k].num) <0) k=j;
		}
		if(k!= i-1) {
			Student x = a[i-1];
			a[i-1] = a[k];
			a[k] = x;
		}
	}
}



