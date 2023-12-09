#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c1 = 'A', d1 = 'a', c2 ='F', ch;
	for(ch = c1; ch<=c2; ch++, d1++){
		printf("%c: %d,", ch, ch);
		printf("%c: %d\n", d1, d1);
	}
	return 0;
}
