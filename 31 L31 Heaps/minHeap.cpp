// STL priority queue class
#include<bits/stdc++.h>
using namespace std;


int main() {

	priority_queue < pair<int, int> , vector < pair<int, int>>, greater<pair<int, int>> > pq;
	// priority_queue<int, vector<int>, greater<int>> pq;

	pq.push({4, 1});
	pq.push({5, 2});

	cout << pq.size();
	cout << pq.top().first << " " << pq.top().second << endl;


	return 0;
}