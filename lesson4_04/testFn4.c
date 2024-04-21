#include<stdio.h>

void printFn2(){
	char a[] = "12342345342356";
	int i,c[7]={0};
	for(i=0;a[i]!='\0';i++)
	  c[a[i]-48]++;
	for(i=1;i<7;i++) printf("%d ",c[i]);  
	printf("\n");
}
