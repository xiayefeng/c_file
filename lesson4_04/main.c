#include <stdio.h>
#include <stdlib.h>

void pirntArr();
void pirntList2();
void printFn();
void printFn2();
void printFn3();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10]= {12,39,26,41,55,63,72,40,83,95};
	int i, i1 = 0, i2=0;
	for(i=0;i<10;i++){
		if(a[i]%2==1) i1++; else i2++;
	}
	printf("%d %d\n", i1, i2);
	pirntArr();
	pirntList2();
	printFn();
	printFn2();
	printFn3();
	return 0;
}
