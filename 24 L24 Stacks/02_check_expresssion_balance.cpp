// https://www.techiedelight.com/check-given-expression-balanced-expression-not/


/*----------------------------------------------------------------
  -> if current brackets is opening brackets then push into the stack 
  -> if current brackets is closing brackets then pop from the stack 
*/
#include<bits/stdc++.h>
using namespace std;


bool isBalanced(string exp) {
    if (exp.length() == 0 or exp.length() == 1) {
        return false;
    }

    // create a stack of character and insert the elements from the stack 
    stack<char> stack; 

    for (char ch:exp) {
        if (ch == '(' or ch == '{' or ch == '[') {
            stack.push(ch); 
        }

        if (ch == '}' or ch == ')' or ch == ']') {
            if (stack.empty()) {
                return false; 
            }
        }
    }
}

/*
    - When there is an opening brackets then directly push correspoding closing brackets. 
    - When there is an closing brackets else return false 
    - Try to check with stac.top() == ch : stack.pop() 
    - else return false here 
*/


int main(int argc, char) {



    return 0; 
}