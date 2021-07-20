#include<iostream>
#include<list>
using namespace std;


list<int> even;
list<int> odd;
list<int> ans;

void test(list<int> l) {

	for (auto it = l.begin(); it != l.end(); it++) {
		int data = *it;
		if (data % 2 == 0) {
			even.push_back(data);
		}
		else {

			odd.push_back(data);
		}
	}

	for (auto it = odd.begin(); it != odd.end(); it++) {
		int data = *it;
		ans.push_back(data);
	}

	for (auto it = even.begin(); it != even.end(); it++) {
		int data = *it;
		ans.push_back(data);
	}



	for (auto it = ans.begin(); it != ans.end(); it++) {
		cout << *it;
	}

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	list<int> l {2, 1, 2, 3, 4, 6, 8};

	test(l);


	return 0;
}