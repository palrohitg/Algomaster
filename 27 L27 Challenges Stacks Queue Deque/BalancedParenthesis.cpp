#include<iostream>
#include<stack>
#include<vector>
using namespace std;


/*
    1. stack is not empty and cur is closing bracket and top having the open brackets then pop out 
    2. else push into the stack 
*/

bool balancedParenthesisCheck(char input[]) {
    
    stack<char> s;
    for(int i=0; input[i] != '\0'; i++) {
        
        // need to separately handle the case 
        if(!s.empty() and  (input[i] == ')' or input[i] == '}' or input[i] == ')')){

            if(input[i] == ')' and s.top() == '('){
                s.pop();
            }
            if(input[i] == '}' and s.top() == '{') {
                s.pop();
            }
            if(input[i] == ']' and s.top() == '[') {
                s.pop();
            }
        }
        else {
            s.push(input[i]);
        }
    }

    // check if the stack is empty or not if empty means all pairs is present and string balanced 
    if(s.empty()) {
        return true;
    }
    return false;
}

int main() {
    
    char str[1000000];
    cin >> str;
    bool ans = balancedParenthesisCheck(str);
    if(ans) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }

    return 0;
}
