/*
    Pseudo code 
    1. firstly shift all the n-2 to element to another stack
    2. remove the top and shift all the element back to the queues  

*/




#include<iostream>
#include<stack>
using namespace std;

stack<int> s1;
stack<int> s2;



void remove(int i, int n) {

    // pop out the s1 element and push into the s2 stacks 
    for(int i=0; i < n-1-i; i++) {
        int data = s1.top();
        s1.pop();
        s2.push(data);
    }

    // finally remove the front element 
    cout << s1.top() << " ";
    s1.pop();

    // push the s2 to elements to s1 
    while(!s2.empty()) {
        int data = s2.top();
        s2.pop();
        s1.push(data);
    }
    return;
}

int main() {

    int n; cin >> n;
    for(int i=0; i<n; i++) {
        s1.push(i);
    }
    // Deque operation loops 
    for(int i=0; i<n; i++) {
        remove(i, n);
    }
     

    return 0;   
}