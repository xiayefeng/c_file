#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
  int a,b;
  for(a=20; a<= 32; a+= 2) {
	  for(b=10; b<=30; b+= 3 ){
		  if((a == 40 - 2/3 * b) && (3*a + 2*b == 120)){
		    printf("%d %d\n", a, b);
		  }
	  }
  }
}
