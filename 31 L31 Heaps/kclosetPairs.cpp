

/*
3 April
1. top k frequent elements Done
2. k closest pairs Done

Algo :
1. Make the ans vectors.
2. Traverse the points vector, find the distance & insert into the actual vectors
3. Shift all the elements of the maxHeaps to ans vectors
   TC: O(NlogK) N traverse all the points and k insert into vectors

*/


class Solution {
public:
	vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
		vector<vector<int>> ans;
		priority_queue<pair<int, pair<int, int>>> pq;
		int n = points.size();
		// traverse the arrays
		for (int i = 0; i < n; i++) {
			int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];

			//insert dist, and corrdintates
			if (pq.size() < k) {
				pq.push({dist, {points[i][0], points[i][1]}});
			}
			else {
				if (dist < pq.top().first) {
					// remove the top pair
					pq.pop();
					// inser the new one
					pq.push({dist, {points[i][0], points[i][1]}});
				}
			}
		}

		// shift heaps elements to ans
		while (!pq.empty()) {
			int x = pq.top().second.first;
			int y = pq.top().second.second;

			ans.push_back({x, y});
			pq.pop();
		}

		return ans;
	}
};