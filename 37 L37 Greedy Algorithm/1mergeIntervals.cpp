class Solution {
public:

    // to question using inplace merging
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n =  intervals.size();
        ans.resize(n);
        for (int i = 0; i < n; i++) {
            ans[i].resize(2);
        }
        ans.clear();

        sort(intervals.begin(), intervals.end());
        int prev = 0;

        for (int i = 1; i < intervals.size(); i++) {

            // if the current and the prev intervals are overlapping then merge the intervals inplace
            if (intervals[prev][1] >= intervals[i][0]) {
                intervals[prev][0] = min(intervals[prev][0], intervals[i][0]);
                intervals[prev][1] = max(intervals[prev][1], intervals[i][1]);
            }
            else {
                // if not overlapping then print assign the values simply
                prev++;
                intervals[prev][0] = intervals[i][0];
                intervals[prev][1] = intervals[i][1];
            }
        }

        for (int i = 0; i <= prev; i++) {
            ans.push_back(intervals[i]);
        }

        return ans;
    }
};