#include<iostream>
#include<forward_list>
#include<list>
using namespace std;

mergelist()

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n1, n2;
		cin >> n1;
		list<int> l1{};
		list<int> l2{};
		// List1 inputs
		for (int i = 0; i < n1; i++) {
			int data;
			cin >> data;
			l1.push_back(data);
		}
		// List2 inputs
		cin >> n2;
		for (int i = 0; i < n2; i++) {
			int data;
			cin >> data;
			l2.push_back(data);
		}
		mergelist(l1,l2)
		// print the list1
		for (auto a : l1) {
			cout << a << "-->";
		}
		cout << endl;

		// print the list2
		for (auto a : l2) {
			cout << a << "-->";
		}
		cout << endl;
	}

	l2.merge(l1)
	// print the list know

	return 0;
}