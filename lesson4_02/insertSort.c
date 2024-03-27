void insertSort(int a[], int n){
	int i,j,x;
	for(i=1;i<n;i++){
		x=a[i];
		for(j=i-1;j>=0;j--)
		  if(x<a[j]) a[j+1] = a[j];
		  else break;
		a[j+1] = x;  
	}
	
}
