#include <stdio.h>
void getMaxN(int n) {
    int i=0;
    double s = 0;
    while(s<=n) {
        i++;
        s+= 1.0 /i;
    }
    printf("n=%d\n", i-1);
}

void getMaxN2(int n){
	int i;
	double s = 0;
	for(i=1;s<=n;i++) s+=1.0/i;
	printf("n=%d \n", i-2);
}
