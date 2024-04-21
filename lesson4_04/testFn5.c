#include<stdio.h>
#include<string.h>

void printFn3(){
	char a[5][10] = {"student", "worker", "soldier", "peasant", "cadre"};
	char s1[10], s2[10];
	int i;
	strcpy(s1, a[0]);
	strcpy(s2, a[0]);
	for(i=1;i<5;i++){
		if(strcmp(a[i], s1) >0) strcpy(s1, a[i]);
		if(strcmp(a[i], s2) <0) strcpy(s2, a[i]);
	}
	printf("%s %s\n", s1, s2);
}

