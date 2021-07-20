// 1. Number of Good Pairs  1512
/*
  Approach :
  1. Count the hashtable occcurence
  2. use n * (n - 1) / 2



*/



class Solution {
public:
	int numIdenticalPairs(vector<int>& nums) {

		unordered_map<int, int> m;

		for (int i = 0; i < nums.size(); i++) {
			m[nums[i]]++;
		}

		int totalPair = 0;

		for (auto p : m) {
			int n = p->second;
			totalPair += (n * (n - 1)) / 2;
		}

		return totalPair;
	}
};


//