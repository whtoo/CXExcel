#include <iostream>
#include <functional>
#include <numeric>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

void swapCmp(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int A[],int n) {
    bool sorted = false;
    int len = n;
    for(int i = 0; i < len; i++) {
        cout << A[i] << ",";
    }
    cout << " " << endl;
    while (!sorted)
    {
        sorted = true;
        for(int i = 1;i < n; i++){
            if(A[i-1] > A[i]){
                swapCmp(A[i-1],A[i]);
                sorted = false;
            }
        }
        n--;
    }
    for(int i = 0; i < len; i++) {
        cout << A[i] << ",";
    }
    cout << " " << endl;
}