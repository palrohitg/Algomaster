// Replace all the occurrence of pi with 3.14

#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<char> replacePI(string input, int i, int n, vector<char> output) {

    // Base Case
    if(i == n) {
        return output;
    }

    // Condition Case
    if(input[i] == 'p' && input[i+1] == 'i') {
        output.push_back('3');
        output.push_back('.');
        output.push_back('1');
        output.push_back('4');
        return replacePI(input, i+2, n, output);
    }
    
    // Recursive Case
    output.push_back(input[i]);
    return replacePI(input, i+1, n, output);
    
}


int main() {

    string input; cin >> input;
    int n = input.length();
    vector<char> output;
    vector<char> ans = replacePI(input, 0, n, output);

    // print the vectors
    for(auto x: ans) {
        cout << x;
    }
    return 0;
}