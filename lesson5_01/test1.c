#include <stdio.h>

void printNum(){
	int x=10,y=20;
	int *px=&x,*py=&y;
	int z=*px + *py;
	printf("%d %d \n", *px, *py);
	*px+= 5;
	printf("%d %d %d\n", *px, *py, z);
}
