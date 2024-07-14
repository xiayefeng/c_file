#include <stdio.h>
#include <stdlib.h>

void Prime(char* fname);
void PrimeOut(char* fname);
void Random(char* fname);
void RandomOut(char* fname);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char* p1="d:\\xxk\\xuxk3.dat";
	char* p2="d:\\xxk\\xuxk4.bin";
	
	Prime(p1);
	PrimeOut(p1);
	Random(p2);
	RandomOut(p2);
	return 0;
}
