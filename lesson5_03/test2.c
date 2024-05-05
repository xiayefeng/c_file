#include <stdio.h>
#include <string.h>

void printStr(){
	char*a[5] = {"computer","telephone","typewriter","television","fridge"};
	char *p=a[0];
	int i;
	for(i=1;i<5;i++){
		if(strcmp(a[i], p) == 1){
			printf("%s ", p);
			p=a[i];
		}
	}
	printf("\n%s\n",p);
}
