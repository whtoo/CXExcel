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
	std::vector<int> v1 { 1,2,3,4,5 };
	for(auto p = v1.begin();p != v1.end();++p) {
		cout << *p << "\n";
	}	
	auto count = sum(A,sizeof(A)/sizeof(int));
	cout << "Count is :" << count << endl;
	return 0;
}
