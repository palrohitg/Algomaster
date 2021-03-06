// First Unique Character Strings  (Easy)

/*
	s = "leetcode"
	return 0.

	s = "loveleetcode"
	return 2.


	Approach :
	1. create the hashtable with the frequency count of each character
	2. In second iteration just find the count where the values is 1
	3. If Iterate reaches to ends then return -1 all the character are duplicates
	   no uniqueness.
*/

class Solution {
public:
	int firstUniqChar(string s) {
		unordered_map<char, int> m;

		for (int i = 0; i < s.length(); i++) {
			char ch = s[i];


		}
	}
};