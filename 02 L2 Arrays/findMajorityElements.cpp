/*
	Approach 2 : Hashmap
	Time : O(N)
	Space : O(N)

	Approach 2 : NlogN Sorting Approach
	a. n / 2 for the even numbers
	b. n / 2 + 1 for odd numbers


	Approach 3 ; Boyer-Moore Voting Algorithms





*/



int VotingAlgo(vector<int> nums) {

	int count = 0;
	int candidate = 0;

	for (int num : nums) {
		if (count == 0) {
			candidate = num;
		}

		count += (num == candidate) ? 1 : -1;
	}
	return candidate;
}




class Solution {
public:
	int majorityElement(vector<int>& nums) {

		unordered_map<int, int> map;

		for (auto num : nums) {
			map[num]++;
		}

		int n = nums.size();
		int temp = n / 2;
		int ans = 0;

		// iterate over the hashmaps
		// find the greatest values
		for (auto p : map) {
			if (map[p.first] > temp) {
				ans = p.first;
				break;
			}
		}

		return ans;
	}
};


class Solution {
public:
	vector<int> majorityElement(vector<int>& nums) {

	}
};