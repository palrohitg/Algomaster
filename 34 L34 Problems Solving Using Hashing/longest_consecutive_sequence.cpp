// length of the strings hashset contains only the uniques elements
// Brute force approaches check the next elements present in the arrays or not
// We have three varitation of this questions

#include<bits/stdc++.h>
using namespace std;

/*
int maxlen(vector<int> v) {

    int longestStreak = 0;
    for (auto it = v.begin(); it != v.end(); it++) {

        int curNum = *it;
        int curStreak = 1;

        // Iterate over the vectors untill be are able to find the next consective elements
        while (binary_search(v.begin(), v.end(), curNum + 1)) {
            curNum += 1;
            curStreak += 1;
        }

        // maximum value
        longestStreak = max(longestStreak, curStreak);
    }

    return longestStreak;
}
*/

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    // iterate over the set
    auto it1 = s.find(30);
    cout << *it1;
    // for (auto num : s) {
    //     cout << num << endl;
    // }

    return 0;
}
