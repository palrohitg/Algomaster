/*

    1. Pick the element from the top and insert the element at the bottom 
    2. call on the smaller subproblems 

*/

#include<iostream>
#include<stack>
using namespace std;

// Access from anywhere
stack<int> st; 

void insertAtBottom(int data) {
    
    // when the stack is empty then only insert the elements 
    if(st.size() == 0) {
        st.push(data);
        return;
    }
    else {

            int element = st.top();
            st.pop();
            insertAtBottom(data);

            // finally push the elements
            st.push(element);
        
    }
    return;
}


void reverse() {

    // Base Case 
    if(st.size() == 1) {
        return;
    }
    int data = st.top();
    st.pop();
    reverse();

    // insert the top element in the bottom 
    insertAtBottom(data);
    return;
}


int main() {

    int n; cin >> n;
    for(int i=0; i<n; i++) {
        int data; cin >> data;
        st.push(data);
    }
    
    reverse();

    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}