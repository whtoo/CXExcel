int sum(int A[],int n){
    if(n < 1) {
        return 0;
    } else {
        return sum(A,n-1) + A[n-1];
    }
} // O(1)