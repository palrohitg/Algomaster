/*
	Approach 2 : Hashmap
	Time : O(N)
	Space : O(N)

	Approach 2 : NlogN Sorting Approach
	a. n / 2 for the even numbers
	b. n / 2 + 1 for odd numbers


	Approach 3 ; Boyer-Moore Voting Algorithms

                 n
    -------------------------------
	(n/3 + 1)  (n/3 + 1) (n/3 - 2)

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
	vector<int> majorityElement(vector<int> &a)
	{
		int y(-1), z(-1), cy(0), cz(0);

		for (const auto & x : a)
		{
			if (x == y) cy++;
			else if (x == z) cz++;
			else if (! cy) y = x, cy = 1;
			else if (! cz) z = x, cz = 1;
			else cy--, cz--;
		}

		cy = cz = 0;
		for (const auto & x : a)
			if (x == y) cy++;
			else if (x == z) cz++;

		vector<int> r;
		if (cy > size(a) / 3) r.push_back(y);
		if (cz > size(a) / 3) r.push_back(z);
		return r;
	}
};


