class Solution {
public:

    unordered_map<int, list<pair<int, int>>> um;

    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        unordered_map<int, int> dist;
        const int inf = 1e9;
        // make the adjancent
        for (auto v : times) {
            int src = v[0];
            int des = v[1];
            int weight =  v[2];
            um[src].push_back(make_pair(des, weight));

        }

        // set all inf
        for (int i = 1; i <= n; i++) {
            dist[i] = inf;
        }

        set<pair<int, int>> s;
        dist[k] = 0;
        s.insert(make_pair(0, k)); // cost, node

        while (s.empty()) {
            auto t = *(s.begin());
            int parentN = t.second;
            int parentD = t.first;
            s.erase(s.begin())

            for (auto nbr : um[parentN]) {
                if (parentD + nbr.second < dist[nbr.first]) {
                    auto f = s.find(make_pair(dis[nbr.first], nbr.first));
                    if (f != s.end()) {
                        s.erase(f);
                    }
                    int d = parentD + x.second;
                    dis[nbr.first] = d;
                    s.insert(make_pair(d, nbr.first))
                }
            }
        }

        int ans = -1;
        for (auto p : dist) {
            if (p.second > ans) {
                ans = p.second;
            }
        }

        return ans == inf ? 1 : ans;
    }

};