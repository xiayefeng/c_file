int sequentialSearch(int a[], int n, int x){
	int i;
	for(i=0;i<n;i++){
		if(x==a[i]) return i;
	}
	return -1;
}


