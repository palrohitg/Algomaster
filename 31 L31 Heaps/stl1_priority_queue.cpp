#include<bits/stdc++.h>
using namespace std;

int main() {

	// Min heaps 
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

	// max heaps 
	priority_queue<int> pq; 
	pq.push(11); 
	pq.push(20); 
	pq.push(30); 
	pq.push(40); 
	pq.push(50); 

	while(!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}

	cout << pq.size() << endl;


	return 0;
}