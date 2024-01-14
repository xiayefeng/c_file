#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double RAD=3.1415926 / 180;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=0;
	printf("%10c%10s%10s\n", 'i', "sin", "con");
	while(i<=90){
		printf("%10d%10.2lf%10.2lf\n", i, sin(i*RAD), cos(i*RAD));
		i+=5;
	}
	return 0;
}
