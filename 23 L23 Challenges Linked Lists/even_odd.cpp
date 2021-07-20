/*

	All the even number after the odd number
	1. Idea is split the ll in two half the odd and even part and then finally merge + concentate two parts
	2. leet code main pointer use kar rahe is only then the space is only constant because we change the pointer
	3. iterate the all the node so, the time complexity is O(N);
	4. list no of node simple solution 

*/







#include<iostream>
#include<list>
using namespace std;

list<int> odd;
list<int> even;

list<int> evenAfterOdd(list<int> &l) {

	for (auto it = l.begin(); it != l.end(); it++) {
		if ((*it) % 2 == 0) {
			even.push_back(*it);
			l.pop_back();
		}
		else {
			odd.push_back(*it);
			l.pop_back();
		}
	}

	// now make the original list
	auto od = odd.begin();
	auto ev = even.begin();


	while (od != odd.end()) {
		l.push_back(*od);
		od++;
	}

	while (ev != even.end()) {
		l.push_back(*ev);
		ev++;
	}

	return l;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << "wokring";
	list <int> l{1, 2, 2, 1, 2};

	list<int> ans = evenAfterOdd(l);

	for (auto it = ans.begin(); it != ans.end(); it++) {
		cout << *it;
	}

	return 0;
}