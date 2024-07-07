#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Student {
	char num[8];
	char name[10];
	short int grade;
};

typedef struct Student Student;

int Search(const Student s[], const int n, const Student x);

int Update(Student s[], int* pn, const Student x);
void Output(Student a[], int n);

int main(int argc, char *argv[]) {
	Student a[8] = {
		{"cs102", "��ƽ", 78},
		{"ch231", "������", 69},
		{"ec115", "����", 82},
		{"pt327", "����", 72},
		{"bx214", "����Զ", 65}
	};
	Student x1 = {"ec115"};
	int n =5;
	int k = Search(a, n, x1);

	Student x = {"pt327", "����", 86}, y= {"sr203", "���", 74};


	if(k>=0) {
		printf("%s %s %hd\n", a[k].num, a[k].name, a[k].grade);
	} else {
		printf("ѧ��Ϊ %s �ļ�¼������!\n", x1.num);
	}
	
	if(Update(a, &n, x) == 1) printf("��ɸ��²���!\n");
	else printf("��ɲ������!\n");
	
	if(Update(a, &n, y) == 1) printf("��ɸ��²���!\n");
	else printf("��ɲ������!\n");
	
	Output(a, n);
	
	return 0;
}
