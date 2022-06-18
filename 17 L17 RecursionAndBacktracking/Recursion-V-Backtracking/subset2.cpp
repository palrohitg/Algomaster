/*

	 subsets  = 123
	Tc : N2^N
	SC : O(J)

*/
class Solution {
public:
	set<vector<int>> tempSet;
	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		vector<vector<int>> ans;
		vector<int> sub;
		subsets(sub, nums, 0);

		// copy the elements of set into vectors
		for (auto it = tempSet.begin(); it != tempSet.end(); it++) {
			vector<int> temp;
			for (auto num : *it) {
				// cout << num << " ";
				temp.push_back(num);
			}
			ans.push_back(temp);
			// cout << endl;
		}

		return ans;

	}

	// Utility functons of 3 steps
	void subsets(vector<int> &sub, vector<int> &nums, int i) {
		tempSet.insert(sub);

		for (int j = i; j < nums.size(); j++) {
			sub.push_back(nums[j]); // insert the first element and then call the recursive
			subsets(sub, nums, j + 1);
			sub.pop_back();
		}
	}

};