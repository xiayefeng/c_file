#include <stdio.h>
#include <string.h>

void pirntStr(){
	char s1[]="StringPointer";
	char *sp=s1;
	char s2[20];
	printf("%s\n", sp);
	printf("%s\n", s1+6);
	strcpy(s2, s1+6);
	printf("%s\n", s2);
}
