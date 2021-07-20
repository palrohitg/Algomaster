#include<iostream> 
#include<cstring> 
#include<climits>
using namespace std; 

// return the character arrays 
// shorest common subsequences in the two strings 
void lcsPrint(string a, string b, int n, int m) {
    
    int dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp)); 

    for(int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            // is character are equal 
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1]; 
            }
            else {
                dp[i][j] = max(dp[i][j -1], dp[i - 1][j]); // max of the upper and left elements 
            }
        }
    }

    // print the lcs fill the lcs from the backs  
    int len = dp[n][m]; 
    char lcs_string[len + 1]; 
    lcs_string[len] = '\0';

    int i = n; 
    int j = m; 

    while (i > 0 && j > 0) {
        
        if(a[i - 1] == b[j - 1]) {
            // include the char in the character 
            lcs_string[len - 1] = a[i - 1]; 
            i--; 
            j--;
            len--;
        }
        else if(dp[i][j - 1] > dp[i - 1][j]) {
            j--; 
        }
        else {
            i--;
        }

    }
    cout << lcs_string; 
}





int main() {

    string a, b; 
    cin >> a >> b; 
    int n = a.length();
    int m = b.length();


    lcsPrint(a, b, n, m);



    return 0;
}