//  Implementation of Weighted Graph in C++
#include<bits/stdc++.h>
using namespace std;

class Graph {
	unordered_map<string, list<pair<string, int>>> l;
public:

	void addEdge(string x, string y, int weight, bool bidir) {
		l[x].push_back(make_pair(y, weight));
		if (bidir) {
			l[y].push_back(make_pair(x, weight));
		}
	}

	void printAdjList() {
		for (auto p : l) {
			string city = p.first;
			list<pair<string, int>> nbrs = p.second;

			cout << city << "-->";

			for (auto nbr : nbrs) {
				string dest = nbr.first;
				int dist = nbr.second;
				cout << dest << " " << dist << ","; 
			}
			cout << endl;
		}
	}
};


int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("../input.txt", "r", stdin);
// 	freopen("../output.txt", "w", stdout);
// #endif

	Graph g;
	g.addEdge("A", "B", true, 20);
	g.addEdge("B", "D", true, 40);
	g.addEdge("C", "D", true, 10);
	g.addEdge("A", "D", false, 50);
	g.printAdjList(); 
	return 0;
}

