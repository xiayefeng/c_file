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
		{"cs102", "张平", 78},
		{"ch231", "王广敏", 69},
		{"ec115", "刘文", 82},
		{"pt327", "古明", 72},
		{"bx214", "张文远", 65}
	};
	Student x1 = {"ec115"};
	int n =5;
	int k = Search(a, n, x1);

	Student x = {"pt327", "古明", 86}, y= {"sr203", "田飞", 74};


	if(k>=0) {
		printf("%s %s %hd\n", a[k].num, a[k].name, a[k].grade);
	} else {
		printf("学号为 %s 的记录不存在!\n", x1.num);
	}
	
	if(Update(a, &n, x) == 1) printf("完成更新操作!\n");
	else printf("完成插入操作!\n");
	
	if(Update(a, &n, y) == 1) printf("完成更新操作!\n");
	else printf("完成插入操作!\n");
	
	Output(a, n);
	
	return 0;
}
