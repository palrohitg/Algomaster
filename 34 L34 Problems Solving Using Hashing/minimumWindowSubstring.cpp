// Tag (Hard)
// return the strings itself not the counts
/*
	1. Substrings with concatenations of all words
	2. minimum size subarrays sum
	3. sliding windows maximum
	4. permutations of strings
	5. smallest range covering elements from k litss
	6. minimum windows subsequences



*/
/*
	1.Pattern matching create the frequency arrays and match the particular character in the arrays
	2.Expand the current windows
	3.Decrement the count of the previous windows and find out the minimum windows



*/

class Solution {
public :
	string minWindow(string s, string t) {

		if (s.length() < t.length()) return "";

		int len = t.length();

		// Hasttable for t strings
		int hasT[256] = {0};
		int hasS[256] = {0};

		for (int i = 0; i < t.length(); i++) {
			hasT[t[i]]++;
		}

		int left = 0;
		int right = 0;

		// Itervate over the strings
		int count = 0;
		int start_index = -1;
		int minLen = INT_MAX;

		for (int i = 0; i < s.length(); i++) {
			// insert the strings into hashtable
			hasS[s[i]]++;

			// check in current character present in both table
			if (hasT[s[i]] != 0 and hasS[s[i]] <= hasT[s[i]]) {
				count++;
			}

			// if desirable window is found
			if (count == len) {

				// Try to shrink the window and findout the min window length
				while (hasS[s[left]] > hasT[s[left]]) {
					hasS[s[left]]--;
					left++;
				}

				curLen = i - left + 1;
				if (curLen > minLen) {
					minLen = curLen;
					start_index = left;
				}
			}
		}
		return (start_index == -1) ? "No String" : s.substr(start_index, minLen);
	}

};

string minWindow(string S, string T) {
	string result;
	if (S.empty() || T.empty()) {
		return result;
	}
	unordered_map<char, int> map;
	unordered_map<char, int> window;
	for (int i = 0; i < T.length(); i++) {
		map[T[i]]++;
	}
	int minLength = INT_MAX;
	int letterCounter = 0;
	for (int slow = 0, fast = 0; fast < S.length(); fast++) {
		char c = S[fast];
		if (map.find(c) != map.end()) {
			window[c]++;
			if (window[c] <= map[c]) {
				letterCounter++;
			}
		}

		if (letterCounter >= T.length()) {
			while (map.find(S[slow]) == map.end() || window[S[slow]] > map[S[slow]]) {
				window[S[slow]]--;
				slow++;
			}
			// update the array
			if (fast - slow + 1 < minLength) {
				minLength = fast - slow + 1;
				result = S.substr(slow, minLength);
			}
		}
	}
	return result;
}