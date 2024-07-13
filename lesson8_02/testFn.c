#include <stdio.h>
#include <stdlib.h>

int a[10] = {48, 62, 25, 73, 66, 80, 78, 54, 36, 47};

void SelectSort(int a[], int n) { // 对数组a[10]进行升序排列
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
	fp1 = fopen("d:\\xxk\\data.bin", "wb"); // 以二进制写方式打开文件

	if(!fp1) {
		printf("文件没有打开!\n");
		exit(1);
	}
	for(i=0; i<10; i++) { // 向文件写入a数组中每个元素值
		fwrite(&a[i], sizeof(int), 1, fp1);
	}
	SelectSort(a, 10); // 调用排序算法

	fwrite(a, sizeof(int), 10, fp1); // 把数组a中的10个整数一次性写入文件

	fclose(fp1); // 关闭fp1所对应的文件
}

void readBinFile() {
	int a[10];
	int i;
	FILE* fp1;
	fp1 = fopen("d:\\xxk\\data.bin", "rb"); // 以二进制读方式打开文件
	if(!fp1) {
		printf("文件没有打开!\n");
		exit(1);
	}
	fseek(fp1, 10*sizeof(int), SEEK_SET); // 把文件位置指针移到10个整数之后
	fread(a, sizeof(int), 10, fp1); // 一次读出10个整数列放到a[10]数组中
	for(i=0;i<10;i++) printf("%d ", a[i]); //依次显示出升序排列的10个整数
	printf("\n");
	fseek(fp1, 0, SEEK_SET); // 把文件位置指针移到文件开始位置 
	for(i=0;i<10;i++){ // 依次读出并显示前10个整数 
		fread(&a[i], sizeof(int), 1, fp1);
		printf("%d ", a[i]);
	}
	printf("\n");
	fclose(fp1); // 关闭fp1所对应的文件 
}
