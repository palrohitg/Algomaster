/*
Sorted the activity Based on three factors
1. Start time
2. End Time Greedy Solutions
3. Durations
*/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    return p1.second < p2.second;
}


int main() {

    int t; cin >> t;
    int s, e, n;
    vector<pair<int, int > > v;

    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> s >> e;
            v.push_back(make_pair(s, e));
        }

        // Sort the activities according to their finishing times
        sort(v.begin(), v.end(), compare);


        // Pick the activities one by one
        int res = 1;
        int fin = v[0].second;

        for (int i = 1; i < n; i++) {
            if (v[i].first >= fin) {
                // Must Do activity
                res++;
                fin = v[i].second;
            }
        }

        cout << res << endl;

        v.clear();

    }

    return 0;
}