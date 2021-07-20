class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& v) {
        int ans = 0, k;
        sort(v.begin(), v.end());
        set<int>s;
        int t = 0;
        for (int i = 0; i < v.size();) {
            s.clear(), s.insert(0), s.insert(11), k = v[i][0];
            while (i < v.size() && k == v[i][0])s.insert(v[i][1]), i++;
            t++;
            auto p = s.begin();
            for (auto it = ++s.begin(); it != s.end(); it++) {
                if (*p == 0 && 6 <= *it && *it <= 9)ans++;
                else if (*p == 0 && 10 <= *it && *it <= 11)ans += 2;
                else if (*p == 1 && 6 <= *it && *it <= 9)ans++;
                else if (*p == 1 && 10 <= *it && *it <= 11)ans += 2;
                else if (*p == 2 && 8 <= *it && *it <= 11)ans++;
                else if (*p == 3 && 8 <= *it && *it <= 11)ans++;
                else if (*p == 4 && 10 <= *it && *it <= 11)ans++;
                else if (*p == 5 && 10 <= *it && *it <= 11)ans++;
                p = it;
            }
        }
        return ans + 2 * (n - t);
    }
};