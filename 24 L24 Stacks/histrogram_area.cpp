/*
1. left boundary
2. right boundary
3. final the largest element
*/



// Optimised with stack 

#include<iostream>
#include<stack>
using namespace std;

// NSL and NSR
int lessFromLeft(int arr[], int curElement, int s) {
    int lb = -1;
    for(int i = s-1; i>=0; i--) {
        if(arr[i] < curElement) { // nearest smaller to left and then if reaches to zeroes than simply but the -1 
            lb = i;
            break;
        }
    }

    return lb;
}


int lessFromRight(int arr[], int curElement, int s, int n) {
    int ub = n;
    for(int i = s+1; i<n; i++) {
        if(arr[i] < curElement) { // nearest smaller to left and then if reaches to zeroes than simply but the -1 
            ub = i;
            break;
        }
    }

    return ub;
}

int largestRectangleArea(int arr[], int n) {

    int maxArea = 0;

    for(int i=0; i<n; i++) {
        int lb = lessFromLeft(arr, arr[i], i);
        int ub = lessFromRight(arr, arr[i], i, n);

        int width = ub-lb-1;
        int area = arr[i] * width;
        if(maxArea < area) {
            maxArea = area; 
        } 
    }
    return maxArea;
}


int main() {

    int arr[100] = {1,2,3,4,5};
    int n = 5; 
    cout << largestRectangleArea(arr, n);    
    return 0;
}