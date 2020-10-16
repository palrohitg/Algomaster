// Next Greater Element in the circular arrays 
#include<bits/stdc++.h> 
using namespace std; 


int main() {

    int n; cin >> n; 
    int *arr = new int[n];
    int *ans = new int[n]; 
    stack<int> s; 
    // vector<int> input; 

    for (int i = 0; i < n; i++) {
        int data; cin >> data; 
        arr[i] = data;
    }
    
    // iterate from right to left and insert the value in the stack and ans arrays
    for (int j = 0; j < 2; j++) {
        for (int i = n - 1; i >= 0; i--) {

            // stack is empty then insert one in the vector 
            if (s.empty()) {
                ans[n -1 - i] = -1;  
            } 
            else if (!s.empty() and arr[s.top()] > arr[i]) {
                // insert the s.top() value in the vectors 
                ans[n - 1 - i] = arr[s.top()]; 
            }
            else {
                while(!s.empty() and arr[s.top()] <= arr[i]) {
                    // remove the elments 
                    s.pop(); 
                }
                // if stack is empty then insert -1 
                if(s.empty()) {
                    ans[n -1 - i] = -1;  
                }
                if(!s.empty() and arr[s.top()] > arr[i]) {
                    ans[n - 1 - i] = arr[s.top()]; 
                }

            }            // insert the current index in the stacks
            s.push(i); 
        }
    }

    // Print the arrays in the reverse orders
    for (int i = n-1; i >= 0; i--) {
        cout << ans[i] << " "; 
    }

    delete [] arr; 
    delete [] ans; 

    return 0;

} 