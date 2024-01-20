#include <stdio.h>

void getLen(){
	const int n = 30;
	int a, b, c, d;
	for(a=1; a<=n;a++){
		for(b=a+1; b<= n; b++){
			d= a*a + b*b;
			for(c=b+1;c*c<= d;c++)
			  if(c*c==d) printf("(%d, %d, %d)\n", a, b, c);
		}
	}
}
