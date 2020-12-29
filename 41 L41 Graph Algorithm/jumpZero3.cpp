/*
 Approachs : 1
 1. check the corner case when arr.size() == 1 and arr[start] == 0 return true
 2. insert the start index in the queue
 	a. opt1 = idx + arr[idx] also opt1 < n right side boundarys
 	b. opt2 = idx - arr[idx] also op2 >= 0 left side boundarys

 3. if not found zero then return false
*/


#include<bits/stdc++.h>
using namespace std;

bool canReach(vector<int>& arr, int start) {

	if (arr.size() == 1 and arr[start] == 0) return true;
	vector<bool> visited;
	visited.resize(arr.size(), false); // at start all the nodes are unvisited

	queue<int> q;
	q.push(start);
	visited[start] = true; // mark the index as visited

	while (!q.empty()) {

		int idx = q.front();
		q.pop();

		if (arr[idx] == 0) return true;

		int opt1 = idx + arr[idx];
		int opt2 = idx - arr[idx];

		if (opt1 <= arr.size() and visited[opt1] == false) {
			q.push(opt1);
			visited[opt1] = true;
		}

		if (opt2 >= arr.size() and visited[opt2] == false) {
			q.push(opt2);
			visited[opt2] = true;
		}
	}

	return false;
}



int main() {

	vector<int>arr;
	int n; cin >> n;
	int start; cin >> start;
	arr.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	if (canReach(arr, start)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}

	return 0;
}


