// Faang Problem  // Backtracking problems 
#include<iostream>
#include<string>
#include<vector>
using namespace std;

// void generateParenthesis(vector<char> output, int j, int n, int open, int close) {

//     // Base Case 
//     if(j == 2*n) {
//         for(auto x : output) {
//             cout << x;
//         }
//         cout << endl;
//         return;
//     }  

//     // Recursive Case + Condition 
//     if(open < n) {
//         output.push_back('(');
//         generateParenthesis(output, j+1, n, open+1, close);
//     }

//     if(close < open) {
//         output.push_back(')');
//         generateParenthesis(output, j+1, n, open, close + 1);
//     }
// }


// String as the datatype
void generateParenthesis(string &input, int j, int n, int open, int close) {

    // Base Case 
    if(j == 2*n) {
        input[j] = '\0';
        cout << input;
        return;
    }  

    // Recursive Case + Condition 
    if(open < n) {
        input[j] = '(';
        generateParenthesis(input, j+1, n, open+1, close);
    }

    if(close < open) {
        input[j] = ')';
        generateParenthesis(input, j+1, n, open, close + 1);
    }
}




int main() {

    int n; cin >> n;
    string input;
    generateParenthesis(input, 0, n, 0, 0);
    return 0;
}