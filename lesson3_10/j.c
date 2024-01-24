#include <stdio.h>
const int T=6;
void pirntfNum7(){
	int i,j,k=0;
	for(i=1;i<T;i+=2)
	  for(j=2;j<=T;j++)
	    if(i+j== T) printf("+");
	    else if(i*j==T) printf("*");
	    else k++;
	printf("\nk=%d\n",k);    
}
