// Sliding Windows solutions
// Return the substring which has the min windows in the substrings
/*

	Approach->
	1. Create two hashtable and with char, frequency
	2. Now, traverse the first substring and check the value of the last substrings
	3. Write two findout the matching character frequency, expand and contract the videos

*/

#include<bits/stdc++.h>
using namespace std;


string minWindowSubString(string s1, string s2) {

	int m1[128] = {0};
	int m2[128] = {0};

	int len = s2.length();

	// keep the count of each character in hashtable
	for (int i = 0; i < len; i++) {
		m2[s2[i]]++;
	}

	int count = 0;
	int left = 0;
	int right = 0;
	int minLen = INT_MAX;
	int start_index = -1;
	// traverse the first strings
	for (; right < s1.length(); right++) {

		m1[s1[right]]++;

		// check if this character is present on the m2 or not
		if (m2[s1[right]] != 0 and m1[s1[right]] <= m2[s1[right]]) {
			count++;
		}

		if (count == len) {

			// Try to contract the windows
			while (m1[s1[left]] > m2[s2[left]]) {
				m1[s1[left]]--;
				left++;
			}

			int curLen = right - left + 1;
			if (curLen < minLen) {
				minLen = curLen;
				start_index = left;
			}

		}
	}

	return (start_index == -1) ? " no " : s1.substr(start_index, minLen);
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);

	string result = minWindowSubString(s1, s2);
	cout << result << endl;



	return 0;
}