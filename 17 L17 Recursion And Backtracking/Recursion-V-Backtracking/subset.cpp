// 78. Subsets Problem
/*
	I will make two pointers i and j
	and apply the case of include and excludes
	abc = 2^3
	total subsets = 2^n
*/
class Solution {
public:

	set<vector<int>> ans;

	void helper(vector<int> &num, vector<int> &output, int i, int j, int size) {
		// Base Case
		if (i == size) {
			ans.insert(output);
			output.clear();
			return;
		}

		output[j] = num[i];
		// Include Case
		helper(num, output, i + 1, j + 1, size);
		// Exclude Case
		helper(num, output, i + 1, j, size);

		return;
	}

	vector<vector<int>> subsets(vector<int>& nums) {

		int n = nums.size();
		vector<int> output;
		output.reserve(n);
		helper(nums, output, 0, 0, n);
		vector<vector<int>> tempAns;

		// for (auto it = ans.begin(); it != ans.end(); it++) {
		// 	for (auto num : *it) {
		// 		cout << num << " " << endl;
		// 	}
		// 	cout << endl;
		// }

		cout << ans.size();

		return tempAns;
	}
};

// Space Complexity
// T(n) = 2T(n-1) + N


// Simple and Elegant Solutions
class Solution {
public:
	vector<vector<int>> subsets(vector<int>& nums) {
		set<vector<int>> subs;
		vector<vector<int>> ans;
		vector<int> sub;
		subsets(nums, 0, sub, subs);

		for (auto it = subs.begin(); it != subs.end(); it++) {
			vector<int> temp;
			for (auto num : *it) {
				temp.push_back(temp);
			}
			ans.push_back(temp);
		}

		return ans;
	}


	void subsets(vector<int> &nums, int i, vector<int> &sub, vector<vector<int>> &subs) {
		subs.insert(sub);

		for (int j = i; j < nums.size(); j++) {
			sub.push_back(nums[j]);
			// recursive call to get more subsets by including and then excluding the elements
			subsets(nums, j + 1, sub, subs);
			sub.pop_back();
		}
	}
};