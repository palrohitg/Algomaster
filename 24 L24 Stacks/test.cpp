#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;



vector<int> lessFromLeft(int arr[], int n, vector<int> left, stack<int> s) {
    // Initially put the 0 index and -1 to left vectors 
    s.push(0);
    left.push_back(-1); 

    // Iterate over the arrays 1 to n-1 and make the vectors 
    for(int i=1; i<n; i++) {

        while(!s.empty() and arr[s.top()] > arr[i]) {
            s.pop();
        }

        // Stack size is zeros means empty  
        if(s.size() == 0) {
            left.push_back(-1);
            s.push(i);
        }
        else {
            // less element in stack then found it push into stack and top push into vectors 
            if(arr[s.top()] < arr[i]) {
               left.push_back(s.top());
                s.push(i);
            }
        }

    }
    return left;
}

// next smaller from right
vector<int> lessFromRight(int arr[], int n, vector<int> right, stack<int> s) {
    s.push(n-1);
    right.push_back(n);

    // Iterate over the arrays 1 to n-1 and make the vectors 
    for(int i=n-2; i>=0 ; i--) {

        while(!s.empty() and arr[s.top()] > arr[i]) {
            s.pop();
        }

        // Stack size is zeros means empty  
        if(s.size() == 0) {
            right.push_back(n);
            s.push(i);
        }
        else {
            // less element in stack then found it push into stack and top push into vectors 
            if(arr[s.top()] < arr[i]) {
                right.push_back(s.top());
                s.push(i);
            }
        }

    }
    return right;
}

int main() {

    int n; cin >> n; 
    long long int *arr = new int[n];
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    vector<int> left;
    vector<int> right;
    stack<int> s;
    vector<int> l = lessFromLeft(arr, n, left, s);
    vector<int> r = lessFromRight(arr, n, right, s);
    reverse(r.begin(), r.end());
    long long int maxArea = 0;

    for(int i=0; i<n; i++) {
        long long int width = r[i] - l[i] - 1;
        long long int area = arr[i] * width;
        if(area > maxArea) {
            maxArea = area;
        }
    }
    cout << maxArea;
    delete[] arr;
    return 0;
}