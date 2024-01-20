#include <stdio.h>
void trans2(int x){
  char a[10];
  int i = 0, rem;
  do{
  	rem = x%16;
  	x=x/16;
  	if(rem < 10) a[i] = 48+rem;
  	else a[i]= 55 +rem;
  	i++;
  }while(x);
  while(i>0) printf("%c", a[--i]);
  printf("\n");
}
