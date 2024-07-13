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
		printf("�ļ�û�д�,�˳�����!\n");
		exit(1);
	}
	printf("������������ѧ����¼����������AAA�����:\n");
	while(1) {
		scanf("%s", x.name);
		if(strcmp(x.name, "AAA") == 0) break;
		scanf("%d", &x.grade);
		fwrite(&x, sizeof(x), 1, fp1);
	}
	fclose(fp1);
	printf("����������ɣ�������������.\n");
}

void outPutFile() {
	int i, j;
	FILE* fio = fopen("Student.bin", "rb+"); // �Զ����ƵĶ�/д ��ʽ���ļ�
	if(!fio) {
		printf("�ļ�û�д�,�˳�����!\n");
		exit(1);
	}
	while(1) {
		printf("����ѡ���:\n");
		printf("1---���ļ�׷��һ����¼��\n");
		printf("2---���������Ҽ�¼��\n");
		printf("3---���������¼�¼��\n");
		printf("4---����Ļ����ļ��е����м�¼��\n");
		printf("5---�������С�\n\n");
		printf("����������ѡ��(1-5):");
		do {
			printf("����:");
			scanf("%d", &i);
		} while(i < 1 || i > 5);
		switch(i) {
			case 1:
				printf("�����׷��ѧ���ļ�¼:");
				scanf("%s %d", x.name, &x.grade);
				Append(fio, x);
				break;
			case 2:
				printf("���������ѧ��������:");
				scanf("%s", x.name);
				y=Find(fio, x);
				if(strcmp(y.name, "AAA") == 0) printf("����ʧ��!\n");
				else printf("���ҳɹ�: %s %d\n", y.name, y.grade);
				break;
			case 3:
				printf("���������ѧ���ļ�¼��");
				scanf("%s %d", x.name, &x.grade);
				j=Update(fio, x);
				if(j==0) printf("����ʧ��!\n");
				else printf("���³ɹ���ԭ��¼Ϊ: %s %d\n",x.name,x.grade);
				break;
			case 4:
				printf("����ļ��е�ȫ����¼:\n");
				Print(fio);
				break;
			case 5:
				printf("\n �������У��ټ�!\n");
				fclose(fio);
				return;
		}
	}

}

// ���ļ���׷��һ����¼
void Append(FILE* fio, const struct Pupil rec) {
	fseek(fio, 0, SEEK_END); // �Ƶ��ļ�λ��ָ�뵽�ļ�β
	fwrite(&rec, sizeof(rec), 1, fio); // д��rec����ļ�¼����
}

// ���ļ��в���һ����֪�����ļ�¼
struct Pupil Find(FILE* fio, struct Pupil rec) {
	fseek(fio, 0, SEEK_SET); // �ƶ��ļ�λ��ָ�뵽�ļ���ʼ
	while(!feof(fio)) {
		int k=fread(&x, sizeof(x), 1, fio);
		if(k== 0) break;
		if(strcmp(x.name, rec.name) == 0) return x;
	}
	strcpy(x.name, "AAA");
	return x;
}

int Update(FILE* fio, const struct Pupil rec) {
	fseek(fio, 0, SEEK_SET); // �ƶ��ļ�λ��ָ�뵽�ļ���ʼ
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







