// Gives a set of ropes you need to joint the ropes such the cost of the joining the ropes should be minimums
// Greedy approaches to join the ropes and calculating the cost of the ropes .
// Greedy appraoches says try the various approaches and then select what the answers

// maintain the means heaps. we can directly the pop out the element in stl without heapify operations

/*

    inputs : [5, 4, 2, 8]  = 19

    9
    11
    19  = 36

    13

    approch 1 : Get the Smallest Ropes and then join it.
                Insert the result in the arrays


*/





#include<iostream>
#include<queue>
#include<vector>
using namespace std;

/*
    Final costs need to add here: 
    1. Now the cost of the elements we are going to calculate the normal onces 
*/

void joinRopes(priority_queue<int, vector<int>, greater<int> > pq) {

    int min_cost = 0;
    while (!pq.empty()) {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        min_cost += a + b;
        pq.push(min_cost);
    }
    cout << min_cost;
}


int main() {

    int n; cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++) {
        int data; cin >> data;
        v.push_back(data);
    }

    priority_queue<int, vector<int>, greater<int>> pq; // min heaps create krdiya 
    // priority_queue<int> maxh; // max heaps create krdiya 

    for (int i = 0; i < v.size(); i++) {
        pq.push(v[i]);
    }

    joinRopes(pq);

    return 0;
}