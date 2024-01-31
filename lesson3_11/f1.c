#include <math.h>

double fn3(int n){
	double s=0.0;
	int i;
	for(i=0;i<=n;i++){
		s+= pow(3, n);
	}
	return s;
}

int fn4(){
	double s=0.0;
	int i = 0;
	do{
		i+=2;
		s+= i*i;
	}while(s<1000);
	i-=2;
	return i;
}

double f1(int n){
	int i;
	double sign = 1.0, s= 1.0;
	for(i=2;i<=n;i++){
		s+=sign/(i*i);
		sign*=-1;
	}
	return s;
}
