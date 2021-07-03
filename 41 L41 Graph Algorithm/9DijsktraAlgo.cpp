#include<iostream>
#include<unordered_map>
#include<set>
#include<list>
#include<climits>
using namespace std;

class Graph {
    unordered_map<int, list<pair<int, int>>> mp;
public:
    void addEdge(int x, int y, int r) {
        mp[x].push_back(make_pair(y, r));
        mp[y].push_back(make_pair(x, r));
    }

    void dijkstra_shortest(int src, int nodes) {
        unordered_map<int, int> dis;
        for (auto x : mp) {
            dis[x.first] = INT_MAX;
        }

        set<pair<int, int>> s;

        dis[src] = 0;
        s.insert(make_pair(0, src));

        while (!s.empty()) {
            auto p = *(s.begin());
            int parentN = p.second;
            int parentD = p.first;

            s.erase(s.begin());

            for (auto x : mp[parentN]) {
                if (parentD + x.second < dis[x.first]) {

                    auto f = s.find(make_pair(dis[x.first], x.first));
                    if (f != s.end()) {
                        s.erase(f);
                    }
                    int d = parentD + x.second;
                    dis[x.first] = d;
                    s.insert(make_pair(d, x.first));
                }
            }
        }

        for (int i = 1; i <= nodes; i++) {
            if (i == src) continue;
            auto f = dis.find(i);
            if (f != dis.end() && dis[i] != INT_MAX) {
                cout << dis[i] << " ";
            } else {
                cout << "-1" << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int nodes, edges;
        cin >> nodes >> edges;
        int x, y, r;
        Graph g;
        for (int i = 0; i < edges; i++) {
            cin >> x >> y >> r;
            g.addEdge(x, y, r);
        }
        int src;
        cin >> src;
        g.dijkstra_shortest(src, nodes);
    }
    return 0;
}