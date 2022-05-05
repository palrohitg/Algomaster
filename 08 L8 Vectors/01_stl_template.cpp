#include<bits/stdc++.h>
using namespace std;

/*

	Implement Queue using arrays

	Approach :
	1. Used the vector for push_back and pop_front operations in c++
	2. Check the TC complexity on GFG for both the operations.

	We can also create the custom templates to show if the arrays
	template<type T>
	void pop_front(std : vector<T> &v) {
		pass
	}

*/

void pop_front(vector<int> &v) {
	if (v.size() > 0) {
		v.erase(v.begin());
	}
}



int main(int argc, char const *argv[])
{

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> v{10, 20, 30};
	pop_front(v);
	cout << "testing the element values" << endl;

	cout << v.size() << endl;

	return 0;
}











