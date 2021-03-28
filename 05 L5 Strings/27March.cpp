// Strings questions list
/*
1. 1221 : Split a String in Balanced Strings (Easy) Greedy

RL RRLL RL RL = 4
RL LLLRRR LR

Approach :
1. Just counts and decrements cancel out each elements
*/

int balancedStringSplit(string s) {
	int res = 0;
	int cnt = 0;

	for (auto c : s) {
		if (c == 'L') {
			cnt += 1;
		}
		else {
			cnt += -1;
		}

		if (cnt == 0) {
			res++;
		}
	}

	return res;
}


// medium type questions
// 5. longest palindromic strings DP
/*
	Approach :
	1. let make a valid string by ignore all special character include only small character
	2. Apply two pointer (start, end) to valid strings to check if is palindromic or not


*/

class Solution {
public:
	bool isPalindrome(string s) {

		string valid;

		for (auto ch : s) {
			// insert this character
			if ((ch >= 97 and ch <= 122)) {
				valid.push_back(ch);
			}
			if (ch >= 65 and ch <= 90) {
				valid.push_back(ch + 32);
			}
		}
		cout << valid << endl;
		// smaller letter
		// apply two pointer to check
		// palindromic or not
		int end = valid.length();
		int start = 0;


		while (start < end) {
			cout << valid[start] << " " << valid[end] << endl;
			if (valid[start] == valid[end]) {
				start++;
				end--;
			}

			if (valid[start] != valid[end]) {
				return false;
			}
		}

		return true;
	}
};


// new comments added

class Solution {
public:
	bool isPalindrome(string s) {
		if (s.empty()) return true;
		int z = s.size();
		int i = 0;
		while (i < z) {
			// cout << "comparing : " << s[i] << " and " << s[z] << endl;
			if (!isalnum(s[z])) { z--; continue; }
			if (!isalnum(s[i])) { i++; continue; }
			if (tolower(s[i++]) != tolower(s[z--])) return false;
		}
		return true;
	}
};

/*
 * O(n) Time and
 * O(1) Space
 */