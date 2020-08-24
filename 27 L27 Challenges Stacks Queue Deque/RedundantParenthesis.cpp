// Dublicate parenthesis
/*

    - (, operands and operator tho push push 
    - if ) and then s.top() ( then return ture
    - else pop unitill (

*/


#include<iostream>
#include<string>
#include<stack>
using namespace std;


bool duplicateBrackets(string str) {

    stack<char> s;
    for(int i=0; i<str.length(); i++) {
        if(str[i] == ')') {

            // Duplicate case when we have the ( and so operands and operators 
            if(!s.empty() and s.top() == '(') {
                return true;
            }
            else {
                while(!s.empty() and s.top() != '(') {
                    s.pop();
                }
                s.pop();
            }
        }
        else {
            // push operands, operators and open brackets
            s.push(str[i]);
        }
    }
    return false;
}



int main() {

    int t; 
    cin >> t; 
    while(t--) {
        string str;
        cin >> str;
        bool ans = duplicateBrackets(str);
        if(ans) {
            cout << "Duplicate" << endl;
        }
        else {
            cout << "No Duplicates " << endl;
        }
    }
    return 0;
}