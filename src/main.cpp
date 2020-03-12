#include <iostream>
#include <functional>
#include <numeric>
#include <algorithm>
#include <vector>
#include <set>
#include "sort/bubble.cpp"
#include "misc/sumarr.cpp"

using namespace std;

int main() {
	
	int A[] = {2,7,4,3,1,6,10};
	
	auto count = sum(A,10);
	cout << "Count is :" << count << endl;
	return 0;
}
