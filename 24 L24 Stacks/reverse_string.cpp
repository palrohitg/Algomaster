// https://leetcode.com/problems/reverse-string
// reverse the stack using another stacks 

/*
    1. Make two stack let says s1 and s2
    2. Shift all the element of s1 to s2 and then again s2 to s1 the stack is reverse 

*/

#include<iostream>
#include<stack>
using namespace std;


void transfer(stack<int> &s1, stack<int> &s2, int n) {

    // make the next calls 
    for(int i=0; i<n; i++) {
        s2.push(s1.top());
        s1.pop();
    }
}


int main() {

    stack<int> s1;
    stack<int> s2;

    int n; cin >> n;
    for(int i=0; i<n; i++) {
        int data; cin >> data;
        s1.push(data);
    }

    for(int i=0; i<n; i++) {
       
        int top = s1.top();
        s1.pop();
        
        // transer the element 
        transfer(s1, s2, n-1-i);
        s1.push(top);
        // transer back but push first
        transfer(s2,s1, n-1-i); 
    }

    for(int i=0; i<n; i++) {
        cout << s1.top() << " ";
        s1.pop();
    }
    return 0;
}