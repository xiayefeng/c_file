#include <stdio.h>
#include <stdlib.h>

/*从低位到高位输出*/
void ltoh(int n) {
	if(n!=0) {
		printf("%d ",n%10);
		n=n/10;
		ltoh(n);
	}
}

/*从高位到低位输出*/
void htol(int n) {
	if(n>=10) {
		htol(n/10);
	}
	printf("%d ",n%10);
}
