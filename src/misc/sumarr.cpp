int sum(int A[],int n){
    if(1 > n) {
        return 0;
    } else {
        return sum(A,n-1) + A[n-1];
    }
} // O(1)