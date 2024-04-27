
void f1(int a[], int n) {
	int i=0,j=n-1,x;
	do {
		while(a[i]<60) i++;
		while(a[j]>= 60) j--;
		if(i<j) {
			x=a[i];
			a[i]=a[j];
			a[j]=x;
			i++;
			j--;
		}
	} while(i<j);
}
