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
	printf("����������������������ı����ݽ���һ���ı��ļ�: \n");
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
		printf("�ļ�û�д�!\n");
		exit(1);
	}
	while(!feof(f4)) {
		char *p = fgets(str, 80, f4);
		if(!p) break;
		printf("%s", str);
		i++;
	}
	printf("�ı��ļ��е�����Ϊ: %d\n", i);
	fclose(f4);
}
