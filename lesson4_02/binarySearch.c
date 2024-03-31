int binarySearch(int a[], int n, int x) {
    int low =0, high=n-1;
    while(low <= high) {
        int mid = (low + high) /2;
        if(x == a[mid]) return mid;
        else if(x<a[mid]) high = mid -1;
        else low = mid +1;
    }
    return -1;
}
