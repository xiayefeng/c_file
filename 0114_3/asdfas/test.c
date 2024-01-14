#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 10;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int i, x, y, z, c = 0;
	srand(time(0));
	for(i=0; i<N;i++){
		x = rand()%90 +10;
		y = rand()%90 +10;
		printf("%d + %d = ", x, y);
		scanf("%d", &z);
		if(x+y== z)c++;		
	}
	printf("最后得分: %d\n", c*10);
}