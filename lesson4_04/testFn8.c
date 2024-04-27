#include<stdio.h>

void f3(char a[]){
	int i, c[5]={0};
	for(i=0;a[i];i++){
		switch(a[i]){
			case ',': c[0]++; break;
			case ';': c[1]++; break;
			case '(':
			case ')': c[2]++; break;
			case '[': 	
			case ']': c[3]++; break; 	
			case '{': 	
			case '}': c[4]++; break; 	
		}
	}
	for(i=0;i<5;i++) printf("%d ", c[i]);
	printf("\n");
}
