/*
1. Push the all the other element to stack 
2. Compare the value of the tos and return the greater and pop out the elements 
3. shift all the other element to temp stack while the stack is not empty and put the current element in the bottom 
4. Push all the other element from temp stack to original while the stack becomes empty
*/

// Brute force main double the arrays and check in the double arrays 

#include<iostream>
#include<stack>
using namespace std;

// void nextGreatestElement(int arr[], int n) {
//     stack<int>s;
//     stack<int> temp;

//     // put all 1 to n-1 element in stack
//     for(int i=n-1; i>0; i++) {
//         s.push(arr[i]);
//     }

//     for(int i=0; i<n; i++) {
//         if(s.top() > arr[i]) {
//             cout << s.top() << " ";
//             s.pop();

//             while(!s.empty()) {
//                 temp.push(s.top());
//                 s.pop();
//             }

//             s.push(arr[i]);
//             while(!temp.empty()) {
//                 s.push(temp.top());
//                 temp.pop();
//             }
//         }
//         else {
//             if(!s.empty() and s.top() < arr[i]) { // if there is no element which is greater than the rest of the element in the stack then pop out and once the size becomes zeros means no element
//                 s.pop();
//             }
//             if(s.size() == 0) {
//                 cout << "-1";
//             }
//         }
//     }

// }


// Pseudocode 
/*
   1. firsly put the -1 for the last value 
   2. Itereate over the arrays right to left  if smaller value found then pop and while the stack is not empty and finally put -1 no greater element found and push the current element
   3. finally change the last element of the arrays 
*/
void nextGreatestElement(int arr[], int res[], int n) {

    stack<int> s;
    for(int i=n-1; i>=0; i--) {
        if(s.empty()) {
            s.push(i);
            res[i] = -1;
        }
        else {
            while(!s.empty() and arr[s.top()] < arr[i]) {
                s.pop();
            }
            if(s.empty()) {
                 s.push(i);
                res[i] = -1; 
            }
            else {
                if(arr[s.top()] > arr[i]) {
                    res[i] = arr[s.top()];
                    s.push(i);
                }
            }
        }
    }

    // find the next greater for the last index value  
    while(!s.empty() and arr[s.top()] <= arr[n-1]) {
        s.pop();
    }
    if(!s.empty() and arr[s.top()] > arr[n-1]) {
        res[n-1] = arr[s.top()];
    }


    // printout the arrays 
    for(int i=0; i<n; i++) {
        cout << res[i] << " ";
    }
    return;
}


int main() {

    int n; cin >> n;
    int *arr = new int[n];
    int *res = new int[n]{0};
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    nextGreatestElement(arr, res, n);
    delete[] arr;
    delete[] res;
    return 0;
}