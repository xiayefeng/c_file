
// 求出m 和 n 的最大公约数 
int Cdivisor(int m, int n){
	int r=m%n;
	while(r!=0){
		m=n;
		n=r;
		r=m%n;
	}
	return n;
}
