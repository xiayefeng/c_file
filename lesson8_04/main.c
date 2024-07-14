#include <stdio.h>
#include <stdlib.h>

void JA(char* fname);
void inputFile();
int wr4(FILE* fptr);
int xw3 (char* fname);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x3;
	char* p= "d:\\xxk\\xuxk1.txt";
	char* p2 = "d:\\xxk\\xuxk4.bin";
	FILE* fin = fopen("d:\\xxk\\wr1.dat", "r");
	if(fin != NULL) {
		int num = wr4(fin);
		printf("%d\n", num);
		fclose(fin);
	}

	x3 = xw3(p2);
	printf("%d\n", x3);

	JA(p);
	inputFile();
	return 0;
}
