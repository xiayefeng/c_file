#include <stdio.h>
void trans(int x){
	int rem;
	do{
		rem = x%16;
		x=x/16;
		if(rem <10) printf("%c", rem + 48);
		else switch(rem){
			case 10: printf("%c", 'A'); break;
			case 11: printf("%c", 'B'); break;
			case 12: printf("%c", 'C'); break;
			case 13: printf("%c", 'D'); break;
			case 14: printf("%c", 'E'); break;
			case 15: printf("%c", 'F'); break;
			default :  break;
		}
	}while(x);
	printf("\n");
}
