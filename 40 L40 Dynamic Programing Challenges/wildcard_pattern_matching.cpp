/*
Given a text 'str' and a wildcard pattern 'pattern', The wildcard pattern can include the characters ‘?’ and ‘ * ’.
‘?’ – matches any single character
‘*’ – Matches any sequence of characters (including the empty sequence)
Find out if the given text matches the pattern.

Input Format
Each testcase contains two strings. First line contains the text string and the second line contains the pattern.

Constraints
Size(str)*Size(pattern) < 100000000

Output Format
Print 1 if the string matches the pattern, else print 0.

Sample Input
aa
a*a
Sample Output
1

Algorithms :
1. String matching algorithms using the wildcard character
2. a. if both the character are equal check the result to for the smaller subproblems
   b. if ? ignore that characters
3. special character * checkout for the diagonals elements



*/

#include<iostream>
#include<string>
using namespace std;


bool match(string text , string pattern) {

    // compute the size of both the strings
    int n = text.length();
    int m = pattern.length();

    bool dp[n + 1][m + 1];

    dp[0][0] = true; // both the strings are Null

    for (int i = 1; i <= n; i++) {
        dp[i][1] = false;  // when the patterns is null and text has some strings
    }

    // for the * character in the patterns
    for (int j = 1; j <= m; j++) {
        if (pattern[j - 1] == '*') {
            dp[0][j] = dp[0][j - 1];
        }
        else {
            dp[0][j] = false;
        }

    }



    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            if (text[i - 1] == pattern[j - 1] || pattern[j - 1] == '?') {

                // check the answer for smaller lengths/dignals elements
                dp[i][j] = dp[i - 1][j - 1];
            }
            else if (pattern[j - 1] == '*') {
                dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
            }
            else if (text[i - 1] != pattern[j - 1]) {
                dp[i][j] = false;
            }

        }
    }
    return dp[n][m];
}


int main() {

    string text, pattern;
    cin >> text >> pattern;

    bool ans = match(text, pattern);
    if (ans) {
        cout << "1";
    }
    else {
        cout << "0";
    }


    return 0;
}
