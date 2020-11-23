// Return the length of the longest consectutive subsequences
// longest streak ---> 100, 4, 200, 1, 3, 2
// what if we used the heap instead of unoredered set

class Solution {
public:
	int longestConsecutive(vector<int> &nums) {

		//sort the vector
		// traverse the vector in single and main the longestStreak and the currSteak
		sort(nums.begin(), nums.end());

		int longestStreak = 0;
		int i = 0;
		for (; i < nums.size(); i++)  {

			int curNum = nums[i];
			int curStreak = 1;

			while (i < nums.size() and nums[i + 1] == curNum + 1) {
				// increase the streak
				curStreak += 1;
				curNum += 1;
				i++;
			}

			longestStreak = max(curStreak, longestStreak);
		}

		return longestStreak;
	}
};


class Solution {
public :
	int longestConsecutive(vector<int> &nums) {

		if (nums.size() == 1 || nums.size() == 0) return nums.size();
		// sort the arrays
		sort(nums.begin(), nums.end());
		int longestStreak = 0;
		int currentStreak = 1;
		for (int i = 1; i < nums.size(); i++) {
			if (nums[i] != nums[i - 1]) {
				//check they are consecutive or not
				if (nums[i] == nums[i - 1] + 1) {
					curStreak++;
				}
				else {
					longestStreak = max(longestStreak, curStreak);
					currentStreak = 1;
				}
			}
		}
		return longestStreak;
	}
};


/*

	Time :  O(NlogN) + O(N)
	Space : O(1)

*/

/*

	Approach -->
	1. put all the content of the vector to a set because set has uniques and sorted property
	2. We can traverse the vector and maintain the currentStreak and the longest streak

*/

class Solution {

public:
	int longestConsecutive(vector<int> &nums) {

		// corners
		if (nums.size() == 0 or nums.size() == 1) return nums.size();


		set<int> s;
		// all unique and store elments
		for (auto num : nums) {
			s.insert(num);
		}

		int longestStreak = 0;
		// Compute the length using the iterators

		for (auto num : s) {
			// not founded
			if (s.find(num - 1) == s.end()) {
				int curNum = num;
				int curStreak = 1;

				// till the next consective element in present in the set
				while (s.find(curNum + 1) != s.end()) {
					curStreak++;
					curNum += 1;
				}

				// assign the greater values
				longestStreak = max(longestStreak, curNum);
			}
		}

		return longestStreak;
	}

};