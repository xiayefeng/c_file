#include <stdio.h>
#include <stdlib.h>

struct Workers {
	char num[6];
	char name[12];
	char sex;
	short int kind;
	union {
		char cadre[8];
		char teacher[12];
		short int worker;
	};
};

void Input(struct Workers a[], int n) {
	int i;
	for(i=0; i<n; i++) {
		printf("请输入第 %d 条记录的编号, 姓名, 性别, 类别及职级：\n", i+1);
		scanf("%s %s %c %hd", a[i].num, a[i].name, &a[i].sex, &a[i].kind);
		switch(a[i].kind) {
			case 1:
				scanf("%s", a[i].cadre);
				break;
			case 2:
				scanf("%s", a[i].teacher);
				break;
			case 3:
				scanf("%hd", &a[i].worker);
				break;
			default:
				break;

		}
	}
}

void Output(struct Workers a[], int n) {
	int i;
	printf("%-6s%-12s%-5s%-12s\n", "num", "name", "sex", "duty");
	for(i=0; i<n; i++) {
		printf("%-6s%-12s%-5c", a[i].num, a[i].name, a[i].sex);
		switch(a[i].kind) {
			case 1:
				printf("%-12s", a[i].cadre);
				break;
			case 2:
				printf("%-12s", a[i].teacher);
				break;
			case 3:
				printf("%-12hd", a[i].worker);
		}
		printf("\n");
	}
}

void Count(struct Workers a[], int n, int c[]) {
	int i;
	c[0] = c[1] = c[2] = 0;
	for(i=0; i<n; i++) {
		switch(a[i].kind) {
			case 1:
				c[0]++;
				break;
			case 2:
				c[1]++;
				break;
			case 3:
				c[2]++;
				break;
		}
	}
}




