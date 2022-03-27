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