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

void Input(struct Workers a[], int n);
void Output(struct Workers a[], int n);
void Count(struct Workers a[], int n, int c[]);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n=8;
	int c[5];
	struct Workers* a= calloc(n, sizeof(struct Workers));
	Input(a, n);
	printf("\n");
	Output(a, n);
	printf("\n");
	Count(a, n, c);
	printf("cadres:   %d\n", c[0]);
	printf("teachers: %d\n", c[1]);
	printf("workers:  %d\n", c[2]);
	free(a);
	return 0;
}
