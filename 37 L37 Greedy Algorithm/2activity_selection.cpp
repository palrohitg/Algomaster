/*
    Given time par person ek activities he kar sakta hais

    Consider the following 6 activities.
         start[]  =  {1, 3, 0, 5, 8, 5};
         finish[] =  {2, 4, 6, 7, 9, 9};
    The maximum set of activities that can be executed
    by a single person is {0, 1, 3, 4}

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