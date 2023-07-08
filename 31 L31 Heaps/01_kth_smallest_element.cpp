/*

1. Brute Force solution using sorting  --> Sort Array and then k-1 index from start
    O(Nlogn)
2. Min heap -> 
3. Max heap 
4. Quick Select


*/  
#include<bits/stdc++.h>
using namespace std;

int findKLargestElement(vector<int> &nums, int k) {
    priority_queue<int, vector<int> , greater<int> > minh;  // greater<int> minheaps 
    for (int i = 0; i < nums.size(); i++) {
        minh.push(nums[i]);
        if (minh.size() > k) {
            minh.pop(); 
        }
    }
    return minh.top();
}

int findKSmallestElements(vector<int> &nums, int k) {
    priority_queue<int, vector<int>> maxh; 
    max.push() // first k elements 

    // k to n nums[i] < pq.top() ; 
    // 
}


/*

 -> Sorted Matrix : Find the elements find kth smallest element in rowwise and columnwise sorted 
    Matrix .
 -> Create an MaxHeap and find out, insert the element upto kth element. 
 -> Find the top elment will store the kth smallest element in the array. 

 TC : O(m*n*logk) k is the no of element in heaps.
    : M, N in the rowwise and colwise element. 
 SC: O(N)
*/

//NlogK

int main() {

    vector<int> v {10, 20, 5}; 

    // Descending order 
    sort(v.begin(), v.end(), greater<>());

    for (auto n : v) {
        cout << n << " " << endl;
    }


    return 0;
}