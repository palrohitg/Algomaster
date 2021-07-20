#include<bits/stdc++.h>
using namespace std;

void killProcess(int *parent, int *id, int n, int k) {

	unordered_map<int, list<int>> adj;
	queue<int> q;
	bool *visited = new bool[n + 1];
	vector<int> ans;
	for (int i = 0; i <= n; i++) {
		visited[i] = false;
	}

	for (int i = 0; i < n; i++) {
		adj[parent[i]].push_back(id[i]);
	}

	q.push(k);
	visited[k] = true;

	while (!q.empty()) {
		int node = q.front();
		q.pop();
		ans.push_back(node);
		for (auto num : adj[node]) {
			if (visited[num] == false) {
				q.push(num);
				visited[num] = true;
			}
		}
	}

	// sort the prcoess
	sort(ans.begin(), ans.end());
	for (auto num : ans) {
		cout << num << " ";
	}

	return;
}


int main() {

	int n, k; cin >> n >> k;
	int *parent = new int[n];
	int *id = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> id[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> parent[i];
	}

	killProcess(parent, id, n , k);

	return 0;
}