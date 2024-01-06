/*
Given a string s, return the longest palindromic substring in s.
Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"


b   a  b
ba  ab
bab  aba
baba abad
babad

Approach:
1. Generate all substring / subarrays
2. Check if substring is palindromic yes / no:
    - Yes, then we will save this in the current. result = save, greater length
    - No,
*/

#include<bits/stdc++.h>
using namespace std;

// TC : O(N)
bool check_palindromic(string str) {
    // aba aba
    int start = 0;
    int end = str.length() - 1;
    int ans = true;

    while (start <= end) {
        if (str[start] != str[end]) {
            ans = false;
            break;
        } else {
            start++;
            end--;
        }
    }

    return ans;
}

string longestPalindrome(string s) {
    // start and end to substring that ans
    int start = 0;
    int end = 0;
    int ans_length = INT_MIN;

    //vector of string and check if it is a palindromic or not
    for (int i = 0; i < s.length(); i++) {
        string cur_sub_string = "";
        for (int j = i; j < s.length(); j++) {
            cur_sub_string += s[j];
            if (check_palindromic(cur_sub_string)) {
                cout << cur_sub_string << endl;
                int cur_length = (j - i) + 1;
                if (cur_length > ans_length) {
                    ans_length = cur_length;
                    cout << ans_length;
                    start = i; end = j;
                    cout << start << " " << end;
                }
            }
        }
    }

    cout << start << end;
    return s.substr(start, end + 1);
}

int main() {
    //  cbbd
    string s; cin >> s;
    cout << longestPalindrome(s);
    return 0;
}

// longest Palindromic Subsequence: 
// C++ program of above approach
#include <bits/stdc++.h>
using namespace std;

// A utility function to get max
// of two integers
int max(int x, int y) { return (x > y) ? x : y; }

// Returns the length of the longest
// palindromic subsequence in seq
int lps(char* seq, int i, int j)
{

	// Base Case 1: If there is
	// only 1 character
	if (i == j)
		return 1;

	// Base Case 2: If there are only 2
	// characters and both are same
	if (seq[i] == seq[j] && i + 1 == j)
		return 2;

	// If the first and last characters match
    // If the first and last characters matches find the latest views 
	if (seq[i] == seq[j])
		return lps(seq, i + 1, j - 1) + 2;

	// If the first and last characters
	// do not match
	return max(lps(seq, i, j - 1), lps(seq, i + 1, j));
}

// Driver program to test above functions
int main()
{
	char seq[] = "GEEKSFORGEEKS";
	int n = strlen(seq);
	cout << "The length of the LPS is "
		<< lps(seq, 0, n - 1);
	return 0;
}

int lps(string& s1, string& s2, int n1, int n2)
{
    if (n1 == 0 || n2 == 0) {
        return 0;
    }
    if (dp[n1][n2] != -1) {
        return dp[n1][n2];
    }
    if (s1[n1 - 1] == s2[n2 - 1]) {
        return dp[n1][n2] = 1 + lps(s1, s2, n1 - 1, n2 - 1);
    }
    else {
        return dp[n1][n2] = max(lps(s1, s2, n1 - 1, n2),
                                lps(s1, s2, n1, n2 - 1));
    }
} 
 
// Driver program to test above functions
int main()
{
    string seq = "GEEKSFORGEEKS";
    int n = seq.size();
    dp[n][n];
    memset(dp, -1, sizeof(dp));
    string s2 = seq;
    reverse(s2.begin(), s2.end());
    cout << "The length of the LPS is "
         << lps(s2, seq, n, n) << endl;
    return 0;
}


int lcs(string X, string Y, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return 1 + lcs(X, Y, m - 1, n - 1);
    else
        return max(lcs(X, Y, m, n - 1),
                   lcs(X, Y, m - 1, n));
}
 

 int lcs(char* X, char* Y, int m, int n,
        vector<vector<int> >& dp)
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return dp[m][n] = 1 + lcs(X, Y, m - 1, n - 1, dp);
 
    if (dp[m][n] != -1) {
        return dp[m][n];
    }
    return dp[m][n] = max(lcs(X, Y, m, n - 1, dp),
                          lcs(X, Y, m - 1, n, dp));
}
 
// Driver code
int main()
{
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";
 
    int m = strlen(X);
    int n = strlen(Y);
    vector<vector<int> > dp(m + 1, vector<int>(n + 1, -1));
    cout << "Length of LCS is " << lcs(X, Y, m, n, dp);
 
    return 0;
}