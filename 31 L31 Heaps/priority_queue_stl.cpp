#include<iostream>
#include<queue>
#include<vector>
using namespace std; 

/*
    Note : How to convert MaxHeap into MinHeap 
    pass two custom parameter which are nothing but, vector<int>, greater<int> convert into the minheaps 

*/


int main() {

    priority_queue<int, vector<int>, greater<int>> pq; 

    int n = 5; 
    for(int i=0; i<n; i++) {
        pq.push(i);  // logN insert the elements
    }
 
    while(!pq.empty()) {
        // get the top elements and remove the elements 
        cout << pq.top() << " ";
        pq.pop();

    }


    return 0;
}