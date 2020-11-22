// How many subarrays we can generates O(N^2)
// Prefix Cumulative Sum
// 1 2 1 2 1     k = 3
// unodred maps
class Solution {
public:
	int subarraySum(vector<int>& nums, int k) {

		//Generate all the sum subarrays and find the sum at each possible pairs
		int count = 0;
		for (int i = 0; i < nums.size(); i++) {
			int sum = 0;
			for (int j = i; j < nums.size(); j++) {
				sum += nums[j];

				if (sum == k) {
					count++;
				}
			}
		}
		return count;
	}
};

// optimizations
// 3 4 7 2 -3 1 4 2
class solution {
public :
	int subarraySum(vector<int>& nums, int k) {

		unordered_map<int, int> map;

		int count = curSum = 0;

		for (int i = 0; i < nums.size(); i++) {
			curSum += nums[i];

			// current value is equal to the target values then increase subarrays count
			if (curSum == k) count++;

			//check if the curSum - k is present in the hashmap if present if means we found one subarrays
			if (map.find(curSum - k) != map.end()) { // iterate not equal to ends means we found out
				count += map[curSum - k];
			}

			// insert in the frequency in the hashmaps
			map[curSum]++;
		}
	}
}