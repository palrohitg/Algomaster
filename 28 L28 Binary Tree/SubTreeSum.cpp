class Solution {
public:

	unordered_map<int, int> m;


	int helper(TreeNode* root, int &maxCount) {
		if (root == NULL) {
			return 0;
		}
		int s1 = helper(root->left);
		int s2 = helper(root->right);
		int total = s1 + s2 + root->val;
		m[total]++
		maxCount = max(maxCount, m[total]);
		return total;
	}

	vector<int> findFrequentTreeSum(TreeNode* root) {
		vector<int> ans;
		int maxCount = 0;
		int tempans = helper(root, maxCount);

		for (auto p : m) {
			if (p->second == maxCount) {
				ans.push_back(p->first);
			}
		}
		return ans;
	}
};