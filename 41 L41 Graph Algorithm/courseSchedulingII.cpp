// Node inDegree approaches


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



class Solution {
public:
	vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

		int n = numCourses;
		vector<vector<int>> g(n, vector<int>());
		vector<int> d(n, 0);
		queue<int> que;
		vector<int> ans;

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
			ans.push_back(i);
			for (auto x : g[i]) {
				if (--d[x] == 0) {
					que.push(x); res++;
				}
			}
		}

		if (que.empty() and res == n) {
			return ans;
		}
		return {};
	}
};

// BFS
TC : (V + E)
// Space : O(V + E)