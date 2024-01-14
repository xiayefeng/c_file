#include<stdio.h>

void main() {
  int a,b;
  for(a=20; a<= 32; a+=2) {
	  b= 60-3*a/2;
		  if(3*a + 2*b == 120){
		    printf("%d %d\n", a, b);
		}
	  
  }
}