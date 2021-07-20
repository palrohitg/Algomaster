//  check if path exists between two nodes in directed graphs
#include<bits/stdc++.h>
using namespace std;


class Graph {

	unordered_map<int, list<int>> l;
public:

	void addEdge(int x, int y) {
		l[x].push_back(y);
	}

	void printList() {
		for (auto p : l) {
			int first = p.first;
			cout << first << "-->";

			for (auto nbr : l[first]) {
				cout << nbr << ",";
			}
			cout << endl;
		}
	}

	bool reachable(int s, int d, unordered_map<int, bool> &visited) {

		if (s == d) return true;

		visited[s] = true;
		list<int> queue;
		queue.push_back(s);

		list<int>::iterator i;

		while (!queue.empty()) {
			s = queue.front();
			queue.pop_front();

			for (i = l[s].begin(); i != l[s].end(); ++i) {

				if (*i == d)
					return true;

				if (!visited[*i])
				{
					visited[*i] = true;
					queue.push_back(*i);
				}
			}

		}

		return false;

	}

};



int main() {

	Graph g;

	int v; cin >> v;
	unordered_map<int, bool> visited;


	for (int i = 0; i < v; i++) {
		int num; cin >> num;
		visited[num] = false;
	}

	int e; cin >> e;

	for (int i = 0; i < e; i++) {
		int u, v; cin >> u >> v;
		g.addEdge(u, v);
	}

	int s, d; cin >> s >> d;

	bool ans = g.reachable(s, d, visited);
	if (ans) {
		cout << "1";
	}
	else {
		cout << "0";
	}


	return 0;
}