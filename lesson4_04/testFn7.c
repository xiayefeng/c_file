#include<stdio.h>

void f2(double a[], int n){
	int i; double sum=0;
	for(i=0;i<n;i++) sum+= a[i];
	sum/= n;
	printf("Æ½¾ùÖµ: %6.2lf\n", sum);
	for(i=0;i<n;i++){
		if(a[i]>= sum) printf("%6.2lf ", a[i]);
	}
	printf("%\n");
}
