#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pupil {
	char name[10];
	int grade;
};

struct Pupil x, y;

void Append(FILE* fio, const struct Pupil rec);

struct Pupil Find(FILE* fio, struct Pupil rec);

int Update(FILE* fio, const struct Pupil rec);

void Print(FILE* fio);

void testFile() {
	char *p = "Student.bin";
	FILE* fp1= fopen(p, "wb");
	if(!fp1) {
		printf("文件没有打开,退出运行!\n");
		exit(1);
	}
	printf("请输入若干条学生记录，输入姓名AAA后结束:\n");
	while(1) {
		scanf("%s", x.name);
		if(strcmp(x.name, "AAA") == 0) break;
		scanf("%d", &x.grade);
		fwrite(&x, sizeof(x), 1, fp1);
	}
	fclose(fp1);
	printf("数据输入完成，程序正常结束.\n");
}

void outPutFile() {
	int i, j;
	FILE* fio = fopen("Student.bin", "rb+"); // 以二进制的读/写 方式打开文件
	if(!fio) {
		printf("文件没有打开,退出运行!\n");
		exit(1);
	}
	while(1) {
		printf("功能选择表:\n");
		printf("1---向文件追加一条记录。\n");
		printf("2---按姓名查找记录。\n");
		printf("3---按姓名更新记录。\n");
		printf("4---向屏幕输出文件中的所有记录。\n");
		printf("5---结束运行。\n\n");
		printf("请输入您的选择(1-5):");
		do {
			printf("输入:");
			scanf("%d", &i);
		} while(i < 1 || i > 5);
		switch(i) {
			case 1:
				printf("输入待追加学生的记录:");
				scanf("%s %d", x.name, &x.grade);
				Append(fio, x);
				break;
			case 2:
				printf("输入待查找学生的姓名:");
				scanf("%s", x.name);
				y=Find(fio, x);
				if(strcmp(y.name, "AAA") == 0) printf("查找失败!\n");
				else printf("查找成功: %s %d\n", y.name, y.grade);
				break;
			case 3:
				printf("输入待更新学生的记录：");
				scanf("%s %d", x.name, &x.grade);
				j=Update(fio, x);
				if(j==0) printf("更新失败!\n");
				else printf("更新成功，原记录为: %s %d\n",x.name,x.grade);
				break;
			case 4:
				printf("输出文件中的全部记录:\n");
				Print(fio);
				break;
			case 5:
				printf("\n 结束运行，再见!\n");
				fclose(fio);
				return;
		}
	}

}

// 向文件中追加一条记录
void Append(FILE* fio, const struct Pupil rec) {
	fseek(fio, 0, SEEK_END); // 移到文件位置指针到文件尾
	fwrite(&rec, sizeof(rec), 1, fio); // 写入rec保存的记录内容
}

// 从文件中查找一条已知姓名的记录
struct Pupil Find(FILE* fio, struct Pupil rec) {
	fseek(fio, 0, SEEK_SET); // 移动文件位置指针到文件开始
	while(!feof(fio)) {
		int k=fread(&x, sizeof(x), 1, fio);
		if(k== 0) break;
		if(strcmp(x.name, rec.name) == 0) return x;
	}
	strcpy(x.name, "AAA");
	return x;
}

int Update(FILE* fio, const struct Pupil rec) {
	fseek(fio, 0, SEEK_SET); // 移动文件位置指针到文件开始
	while(!feof(fio)) {
		int k= fread(&x, sizeof(x), 1, fio);
		if(k==0) break;
		if(strcmp(x.name, rec.name) == 0) {
			int k=sizeof(x);
			fseek(fio, -k, SEEK_CUR);
			fwrite(&rec, sizeof(rec), 1, fio);
			return 1;
		}
	}
	return 0;
}

void Print(FILE* fio) {
	fseek(fio, 0, SEEK_SET);
	while(!feof(fio)) {
		int k=fread(&x, sizeof(x), 1, fio);
		if(k==0) break;
		printf("%s %d\n", x.name, x.grade);
	}
}







