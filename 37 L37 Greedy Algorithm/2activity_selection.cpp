/*
    - Sort the activities based on the End Time
    - Then try to finish the activities which is going to end soon. 

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


// Inbuilt comparator function to find out ke which activities will be performed first
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
        int res = 1; // currently we are sorting only one activities 
        int fin = v[0].second;

        for (int i = 1; i < n; i++) { // iterate over the arrays to find the activities from 1 to n-1 
            if (v[i].first >= fin) {  // first activities >= than finish then assigne the new values
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