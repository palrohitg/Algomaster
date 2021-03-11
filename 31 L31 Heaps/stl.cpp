#include<bits/stdc++.h>
using namespace std;

void printQueue(priority_queue<int, vector<int>, greater<int> > pq) {

	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;

	return;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	priority_queue<int, vector<int>, greater<int> > pq; // max heap;
	pq.push(10);
	pq.push(5);
	pq.push(20);

	printQueue(pq);

	cout << "size of pg " << pq.size();



	return 0;
}