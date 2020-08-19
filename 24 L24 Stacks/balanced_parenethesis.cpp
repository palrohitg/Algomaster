/*

    Pseudo Code for Balanced Parenthesis Problems 
    1. Iterate over the string 
    2. if open brackets the push into the stacks 
    3. if close brackets then check if the stack is not empty then pop out the opening brackets 
    4. And last check if the stack is empty or not return true/false
*/


#include<iostream>
#include<stack>
using namespace std;
stack<char> s;

bool balanceParenthesis(char *arr) {

    for(int i=0; arr[i] != '\0'; i++) {
        if(arr[i] == '(') {
            s.push(arr[i]);
        }
        else if(arr[i] == ')' and !(s.empty()) and s.top() == '(') {
            s.pop();
        }
        else {
            if((arr[i] == ')')) {
                s.push(arr[i]);
            }
        }
    }

    if(s.empty()) {
        return true;
    }
    else {
        return false;
    }
}


int main() {

    char arr[100] = "((A+B)+(C+D))";
    bool ans = balanceParenthesis(arr);
    if(ans) {
        cout << "balanced";
    }
    else {
        cout << "not balanced";
    }
    return 0;
}