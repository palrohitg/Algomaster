#include<bits/stdc++.h>
using namespace std;

class Graph {
	int V;
	// list of arrays
	list<int> *l;
public:

	Graph(int V) {
		this->V = V;
		l = new list<int>[V];
	}

	void addEdge(int x, int y) {
		l[x].push_back(y);
		l[y].push_back(x);
	}


	void printGraph() {

		for (int i = 0; i < V; i++) {
			cout << i << " = ";
			for (auto nbr : l[i]) {
				cout << nbr << "->";
			}
			cout << endl;
		}
	}

};


int main() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif
	Graph g(4);

	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(2, 3);
	g.addEdge(1, 2);

	g.printGraph();

	return 0;
}