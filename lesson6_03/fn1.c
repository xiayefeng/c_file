
// ���m �� n �����Լ�� 
int Cdivisor(int m, int n){
	int r=m%n;
	while(r!=0){
		m=n;
		n=r;
		r=m%n;
	}
	return n;
}
