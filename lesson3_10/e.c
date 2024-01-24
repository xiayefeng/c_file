#include <stdio.h>
void printNum2(){
	int x;
	for(x=5;x<12;x+=2){
		switch(x-1){
			case 4: printf("%d\n", x);
			case 7: printf("%d\n", 2*x+1);
			case 10: printf("%d\n", 3*x-1); break;
			default: printf("default\n");
		}
	}
}
