#include <stdio.h>
#include <stdlib.h>

#define N 10

void pirntArr();
void pirntList2();
void printFn();
void printFn2();
void printFn3();
void f1(int [], int);
void f2(double [], int);
void f3(char []);
void f4(char [][N], unsigned int);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[10]= {62,39,60,41,55,63,72,40,83,95};
	double b[10]= {62,39,60,41,55,63,72,40,83,95};
	char c[] = "sdaf,sadf;sdaf[sadf][sadf]{dsafsaf}";
	char d[][N] = {"aa", "bbb", "cccc", "eeeeee", "ddddd", "fffffff"};
	int i, i1 = 0, i2=0;
	unsigned int dLen = 6;
	for(i=0; i<10; i++) {
		if(a[i]%2==1) i1++;
		else i2++;
	}
	printf("%d %d\n", i1, i2);
	pirntArr();
	pirntList2();
	printFn();
	printFn2();
	printFn3();
	for(i=0; i<10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	f1(a, 10);
	for(i=0; i<10; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	f2(b, 10);
	printf("\n");
	f3(c);
	f4(d,  dLen);
	for(i=0;i<dLen;i++){
		printf("%s, ", d[i]);
	}
	return 0;
}
