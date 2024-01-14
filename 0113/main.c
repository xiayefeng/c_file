#include <stdio.h>
#include <stdlib.h>

const int N=100;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int a, b;
	for(a=2;a<=N;a++){
		for(b=2;b*b<=a;b++)
		if(a%b==0) break;
		if(b*b > a) printf("%d ", a);
	}
}
