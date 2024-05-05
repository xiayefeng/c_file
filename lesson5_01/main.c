#include <stdio.h>
#include <stdlib.h>

void printNum();
void printPoint();
void printList();
void pirntStr();
void printDeList();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=30;
	char *cp;
	cp = "output";
	printf("%p %p\n", &a, cp);
	printf("%d %s\n", a, cp);
	printNum();
	printPoint();
	printList();
	pirntStr();
	printDeList();
	return 0;
}
