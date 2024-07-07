#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void inputFile();
void openFile();
void openFile2();

int main(int argc, char *argv[]) {
	int i;
	FILE* f1;
	f1=fopen("d:\\xxk\\wr1.dat", "w");
	if(f1 == NULL) {
		printf("不能够打开文件!\n");
		exit(1);
	}
	for(i =0; i<26; i++) {
		fputc('a' +i, f1);
	}
	fclose(f1);
	inputFile();
	openFile();
	openFile2();
	return 0;
}
