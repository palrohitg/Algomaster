/*

1 <= N <= 10^7
-109 <= A[i] <= 109

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> v[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (m.count(v[i]) == 0)
        {
            m.insert(make_pair(v[i], 1));
        }
        else
        {
            m[v[i]] += 1;
        }
    }
    int ans = 0;
    int maximum = INT_MIN;
    for (auto it : m)
    {
        if (maximum < it.second)
        {
            maximum = it.second;
            ans = it.first;
        }
    }
    cout << ans << endl;
    return 0;
}