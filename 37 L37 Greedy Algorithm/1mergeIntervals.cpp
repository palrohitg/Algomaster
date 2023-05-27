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

            // if the current and the prechatchachv intervals are overlapping then merge the intervals inplace
            if (intervals[prev][1] >= intervals[i][0]) {
                intervals[prev][0] = min(intervals[prev][0], intervals[i][0]);
                intervals[prev][1] = max(intervals[prev][1], intervals[i][1]);
            }
            else {
                // if not overlapping then print assign the values simply
                prev++;
                intervals[prev][0] = intervals[i][0]; // zeroth index 
                intervals[prev][1] = intervals[i][1]; // first index 
            }
        }

        // Previous as the pointers here 
        for (int i = 0; i <= prev; i++) {
            ans.push_back(intervals[i]);
        }

        return ans;
    }
};


/*

Python Based Solution for the merge interval problems to solve here 
Competitive Coding and space and accuratcy will be required to solve this 
kind of fundanamental problems. 



Approach: 
1. Sort all the intervals based on their start time 
2. Then Push the first intervals into stack. 
3. Check the next intervals from the stack
    a. If there are overlapping or not if overlapping then push new intervals after merging 
    b. Ignore that and push the current intervals 
4. Finally the last intervals which contains all the merge intervals. 


TC : O(nlogn) + O(n) SC : :O(n)

2nd Appraoch : 
Which has the space optimized solution for the same. 
https://www.geeksforgeeks.org/merging-intervals/


class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
		# sort the intervals based on the start 
        intervals.sort(key=lambda intervals: intervals[0])
        ret = []
        end = intervals[0][1]
        start = intervals[0][0];
        for i,n in enumerate(intervals):
            if n[0] <= end : 
                if n[1] > end : end = n[1];
            else:
                ret.append([start,end]);
                start = n[0];
                end = n[1]
        ret.append([start,end])
        return ret;
"""


*/

/**
 * // A C++ program for merging overlapping intervals
#include <bits/stdc++.h>
using namespace std;

// An interval has start time and end time
struct Interval {
	int start, end;
};

// Compares two intervals according to their starting time.
// This is needed for sorting the intervals using library
// function std::sort(). See http://goo.gl/iGspV
bool compareInterval(Interval i1, Interval i2)
{
	return (i1.start < i2.start);
}

// The main function that takes a set of intervals, merges
// overlapping intervals and prints the result
void mergeIntervals(Interval arr[], int n)
{
	// Test if the given set has at least one interval
	if (n <= 0)
		return;

	// Create an empty stack of intervals
	stack<Interval> s;

	// sort the intervals in increasing order of start time
	sort(arr, arr + n, compareInterval);

	// push the first interval to stack
	s.push(arr[0]);

	// Start from the next interval and merge if necessary
	for (int i = 1; i < n; i++) {
		// get interval from stack top
		Interval top = s.top();

		// if current interval is not overlapping with stack
		// top, push it to the stack
		if (top.end < arr[i].start)
			s.push(arr[i]);

		// Otherwise update the ending time of top if ending
		// of current interval is more
		else if (top.end < arr[i].end) {
			top.end = arr[i].end;
			s.pop();
			s.push(top);
		}
	}

	// Print contents of stack
	cout << "\n The Merged Intervals are: ";
	while (!s.empty()) {
		Interval t = s.top();
		cout << "[" << t.start << "," << t.end << "] ";
		s.pop();
	}
	return;
}

// Driver program
int main()
{
	Interval arr[]
		= { { 6, 8 }, { 1, 9 }, { 2, 4 }, { 4, 7 } };
	int n = sizeof(arr) / sizeof(arr[0]);
	mergeIntervals(arr, n);
	return 0;
}

 * 
 */