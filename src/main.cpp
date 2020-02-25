#include <iostream>
#include <functional>
#include <numeric>
#include <algorithm>
#include <vector>
#include <set>
#include "sort/bubble.cpp"

using namespace std;

int main() {
	
	int A[] = {2,7,4,3,1,6,10};
	bubbleSort(A,sizeof(A)/sizeof(int));

	return 0;
}
