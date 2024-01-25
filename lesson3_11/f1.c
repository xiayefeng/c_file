
double f1(int n){
	int i;
	double sign = 1.0, s= 1.0;
	for(i=2;i<=n;i++){
		s+=sign/(i*i);
		sign*=-1;
	}
	return s;
}
