#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char num[6];
	char name[10];
	int grade;
} x, y;

struct Student a[4] = {{"100", "xxk", 85},{"102", "wrong", 83},{"103", "xcong", 90},{"104", "bjuan", 73}};

void JA(char* fname) {
	FILE* fout = fopen(fname, "w");
	if(!fout) {
		printf("�ļ�û�д򿪣��˳�����!\n");
		exit(1);
	}
	char a[20];
	printf("���������ɸ��ַ���,ÿ���ַ�������С��20,�ַ���end��Ϊ������־\n");
	while(1) {
		scanf("%s", a);
		if(strcmp(a, "end") == 0) break;
		fputs(a, fout);
		fputc('\n', fout);
	}
	fclose(fout);
}

int wr4(FILE* fptr) {
	char ch;
	int c=0;
	fseek(fptr, 0, SEEK_SET);
	while(1) {
		ch=fgetc(fptr);
		if(ch != EOF) c++;
		else break;
	}
	return c;
}

void inputFile() {
	int max = 0;
	char* p="d:\\xxk\\xuxk2.bin";
	FILE* fio=fopen(p, "wb+");
	fwrite(a, sizeof(struct Student), 4, fio);
	fseek(fio, 0, SEEK_SET);
	while(!feof(fio)) {
		int k=fread(&x, sizeof(struct Student), 1, fio);
		if(k==0) break;
		if(x.grade > max) {
			max = x.grade;
			y=x;
		}
	}
	printf("%s %s %d\n", y.num, y.name, y.grade);
	fclose(fio);
}

int xw3 (char* fname) {
	FILE* fin=fopen(fname, "rb");
	int c, x, s = 0;
	while(1) {
		c=fread(&x, sizeof(int), 1, fin);
		if(c==0) break;
		s+=x;
	}
	fclose(fin);
	return s;
}

