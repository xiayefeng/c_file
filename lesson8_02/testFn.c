#include <stdio.h>
#include <stdlib.h>

int a[10] = {48, 62, 25, 73, 66, 80, 78, 54, 36, 47};

void SelectSort(int a[], int n) { // ������a[10]������������
	int i,j,k;
	for(i=1; i<n; i++) {
		k=i-1;
		for(j=i; j<n; j++) {
			if(a[j] <a[k]) k=j;
		}
		j=a[i-1];
		a[i-1] = a[k];
		a[k] = j;
	}
}

void writeBinFile() {

	int i;
	FILE* fp1;
	fp1 = fopen("d:\\xxk\\data.bin", "wb"); // �Զ�����д��ʽ���ļ�

	if(!fp1) {
		printf("�ļ�û�д�!\n");
		exit(1);
	}
	for(i=0; i<10; i++) { // ���ļ�д��a������ÿ��Ԫ��ֵ
		fwrite(&a[i], sizeof(int), 1, fp1);
	}
	SelectSort(a, 10); // ���������㷨

	fwrite(a, sizeof(int), 10, fp1); // ������a�е�10������һ����д���ļ�

	fclose(fp1); // �ر�fp1����Ӧ���ļ�
}

void readBinFile() {
	int a[10];
	int i;
	FILE* fp1;
	fp1 = fopen("d:\\xxk\\data.bin", "rb"); // �Զ����ƶ���ʽ���ļ�
	if(!fp1) {
		printf("�ļ�û�д�!\n");
		exit(1);
	}
	fseek(fp1, 10*sizeof(int), SEEK_SET); // ���ļ�λ��ָ���Ƶ�10������֮��
	fread(a, sizeof(int), 10, fp1); // һ�ζ���10�������зŵ�a[10]������
	for(i=0;i<10;i++) printf("%d ", a[i]); //������ʾ���������е�10������
	printf("\n");
	fseek(fp1, 0, SEEK_SET); // ���ļ�λ��ָ���Ƶ��ļ���ʼλ�� 
	for(i=0;i<10;i++){ // ���ζ�������ʾǰ10������ 
		fread(&a[i], sizeof(int), 1, fp1);
		printf("%d ", a[i]);
	}
	printf("\n");
	fclose(fp1); // �ر�fp1����Ӧ���ļ� 
}
