#include <stdio.h>
void pirntNum4(){
	int c1=0,c2=0,c3=0;
	int i,j,k;
	for(i=0;i<5;i++){
		for(j=i;j<5;j++) c1++;
		for(k=5;k>=i;k--) c2++;
		c3++;
	}
	printf("%d %d %d\n", c1, c2, c3);
}
