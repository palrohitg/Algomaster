/*
	Given a substring
	1. find the lenght of the longest substring with non repeating character
	 abcaabc

	 abc is no repeating
	 abca here a is repeating so we don't consider this elements

	 substrings :
	 a     b    c   a
	 ab    bc   ca
	 abc   bca
	 abca



 	 approachs :
 	 1. two pointer
 	 2. maintain the distance to make the strings distances
 	 3. insert the new character if encounter in the set
 	 4. if the duplicated character is occured then remove that character
*/



class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		unordered_set<char> set;

		int i = 0, j = 0, n = s.size(), ans = 0;

		while ( i < n && j < n)
		{
			if (set.find(s[j]) == set.end()) //If the character does not in the set
			{
				set.insert(s[j++]); //Insert the character in set and update the j counter
				ans = max(ans, j - i); //Check if the new distance is longer than the current answer
			}
			else
			{
				set.erase(s[i++]);
				/*If character does exist in the set, ie. it is a repeated character,
				we update the left side counter i, and continue with the checking for substring. */
			}
		}

		return ans;
	}
};