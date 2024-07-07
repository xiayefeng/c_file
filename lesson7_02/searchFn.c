#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char num[8];
	char name[10];
	short int grade;
};

typedef struct Student Student;

int Search(const Student s[], const int n, const Student x) {
	int i;
	for(i=0; i<n; i++) {
		if(strcmp(s[i].num, x.num) == 0) {
			return i;
		}
	}
	return -1;
}

int Update(Student s[], int* pn, const Student x) {
	int i;
	for(i=0; i<*pn; i++) {
		if(strcmp(s[i].num, x.num) == 0) {
			s[i] = x;
			return 1;
		}
	}
	s[*pn] = x;
	(*pn)++;
	return 0;
}

void Output(Student a[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("%-10s%-10s%-10d\n", a[i].num, a[i].name, a[i].grade);
	}
}
