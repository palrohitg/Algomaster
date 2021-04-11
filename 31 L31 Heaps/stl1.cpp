#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	priority_queue<int, vector<int>, greater<int> > pq;

	pq.push(50);
	pq.push(100);
	pq.push(20);


	cout << pq.size() << endl;

	// traverse all the elements

	while (!pq.empty()) {
		cout << pq.top() << endl;
		pq.pop();
	}



	return 0;
}