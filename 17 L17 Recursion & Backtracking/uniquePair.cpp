class Solution {
public :

	int reverseNumber(int num) {

		int rev_num = 0;

		while (num > 0) {
			rev_num = rev_num * 10 + (num % 10);
			num = num / 10;
		}

		return num;
	}


	int countNicePairs(vector<int> & nums) {

		// hashmap to frequency difference
		unordered_map<int, int> m;
		for (auto num : nums) {
			m[num - reverseNumber(num)]++;
		}

		int res = 0;
		int mod = 1000000000;

		for (auto p : m) {
			int val = p.second;
			res = res + (val * (val - 1)) / 2;
			res = res % mod;
		}

		return res;
	}
};


class Solution {
public:
	int reversDigits(int num)
	{
		int rev_num = 0;
		while (num > 0) {
			rev_num = rev_num * 10 + num % 10;
			num = num / 10;
		}
		return rev_num;
	}
	int countNicePairs(vector<int>& nums) {
		vector<int> extra;
		for (int i = 0; i < nums.size(); i++) {
			extra.push_back(reversDigits(nums[i]));
		}
		int cnt = 0;
		for (int i = 0; i < nums.size(); i++) {
			for (int j = i + 1; j < nums.size(); j++) {
				if (nums[i] + extra[j] == nums[j] + extra[i]) {
					cnt++;
				}
			}
		}
		return cnt;
	}
};