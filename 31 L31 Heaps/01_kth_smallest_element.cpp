/*

1. Brute Force solution using sorting  --> Sort Array and then k-1 index from start
    O(Nlogn)
2. Min heap -> 
3. Max heap 
4. Quick Select


*/  
#include<bits/stdc++.h>
using namespace std;

// MinHeaps : 10, 20, 1, 50, 30 
// Firstly Put the k elements in the min heaps 
// If the minh.top() is < then the current elements then pop and insert. 

// here is the kth largest elements what's why using the minimum heap properities 
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minh;  // Here we are

        for (int i = 0; i < k; i++) {
            minh.push(nums[i]); 
        }

        for (int i = k; i < nums.size(); i++) {
            int topElement = minh.top(); 
            if (topElement < nums[i]) {
                minh.pop();
                minh.push(nums[i]); 
            }
        }

        return minh.top(); 
    }
};
/*

 -> Sorted Matrix : Find the elements find   kth smallest element in rowwise and columnwise sorted 
    Matrix .
 -> Create an MaxHeap and find out, insert the element upto kth element. 
 -> Find the top elment will store the kth smallest element in the array. 

 TC : O(m*n*logk) k is the no of element in heaps.
    : M, N in the rowwise and colwise element. 
 SC: O(N)
*/

//NlogK

int main() {

    // sort the vector in the descending orders 
    vector<int> v {10, 20, 5}; 

    // sort(v.begin(), v.end(), greater<>()) // comparator functions to sort the elements 
    sort(v.begin(), v.end(), greater<>());

    for (auto n : v) {
        cout << n << " " << endl;
    }


    return 0;
}