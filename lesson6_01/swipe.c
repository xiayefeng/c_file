void xk3(int* a, int* b){
	int c=*a;
	*a=*b;
	*b=c;
}

void xk4(int a, int b){
	int c=a;
	a=b;
	b=c;
}

int xk5(int a[], int n){
	int i, f=1;
	for(i=0;i<n;i++) f*=a[i];
	return f;
}
