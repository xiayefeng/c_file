#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inputFile() {
	char str[80];
	FILE* f2;
	f2=fopen("d:\\xxk\\wr2.dat", "w");

	if(!f2) {
		printf("Cannot open File.\n");
		exit(1);
	}
	printf("根据在下面输入的若干行文本数据建立一个文本文件: \n");
	while(1) {
		gets(str);
		strcat(str, "\n");
		if(*str == '\n') break;
		fputs(str, f2);
	}
	fclose(f2);
}

void openFile() {
	char ch;
	FILE* f3 = fopen("d:\\xxk\\wr1.dat", "r");
	if(!f3) {
		printf("d:\\xxk\\wr1.dat file not open!\n");
		exit(1);
	}
	ch = fgetc(f3);
	while(ch != EOF) {
		printf("%c", ch);
		ch = fgetc(f3);
	}
	printf("\n");
	fclose(f3);
}

void openFile2() {
	int i=0;
	char str[80];
	FILE* f4= fopen("d:\\xxk\\wr2.dat", "r");
	if(!f4) {
		printf("文件没有打开!\n");
		exit(1);
	}
	while(!feof(f4)) {
		char *p = fgets(str, 80, f4);
		if(!p) break;
		printf("%s", str);
		i++;
	}
	printf("文本文件中的行数为: %d\n", i);
	fclose(f4);
}
