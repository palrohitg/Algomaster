/*
Approach : BFS + Indegree + topological sort
*/

#include<bits/stdc++.h>
using namespace std;


bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

	int len = prerequisites.size();
	int *inDegree = new int[len] {0}; // initialize the indegree with ones
	list<int> *l = new list<int>[len]; // adjacent list

	// Compute the indegree with arrays of vectors
	for (auto temp : prerequisites) {
		int first = temp[0];
		int second = temp[1];
		inDegree[first]++;
		l[second].push_back(first);
	}

	queue<int> q;

	// if there is not zeroes indegree then it contain a cycle
	for (int i = 0; i < numCourses; i++) {
		if (inDegree[i] == 0) {
			q.push(i);
		}
	}

	while (!q.empty()) {

		int course = q.front();
		cout << course << endl;
		q.pop();

		for (auto nbr : l[course]) {

			inDegree[nbr]--;
			if (inDegree[nbr] == 0) {
				q.push(nbr);
			}
		}
	}

	for (int i = 0; i < numCourses; i++) {
		if (inDegree[i] != 0) return false;
	}
	return true;

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int numCourse; cin >> numCourse;
	vector<vector<int>> pre;

	for (int i = 0; i < 2; i++) {
		int u, v; cin >> u >> v;
		pre.push_back({u, v}); // u has pre v s
	}

	if (canFinish(numCourse, pre)) cout << "true";
	else cout << "false";


	return 0;
}

class Solution {
public:
	bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
		int n = numCourses;
		vector<vector<int>> g(n, vector<int>());
		vector<int> d(n, 0);
		queue<int> que;
		for (auto e : prerequisites) {
			g[e[1]].emplace_back(e[0]); d[e[0]]++;
		}
		int res = 0;
		for (int i = 0; i < n; ++i) {
			if (!d[i]) {
				res++; que.push(i);
			}
		}
		while (!que.empty() and (res <= n)) {
			int i = que.front(); que.pop();
			for (auto x : g[i]) {
				if (--d[x] == 0) {
					que.push(x); res++;
				}
			}
		}
		return (que.empty() and (res == n));
	}
};