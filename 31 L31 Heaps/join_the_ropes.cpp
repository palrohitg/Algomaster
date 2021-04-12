// Gives a set of ropes you need to joint the ropes such the cost of the joining the ropes should be minimums
// Greedy approaches to join the ropes and calculating the cost of the ropes .
// Greedy appraoches says try the various approaches and then select what the answers

// maintain the means heaps. we can directly the pop out the element in stl without heapify operations

/*

    inputs : [5, 4, 2, 8]  = 19

    6
    11
    19  = 36


*/





#include<iostream>
#include<queue>
#include<vector>
using namespace std;







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

    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < v.size(); i++) {
        pq.push(v[i]);
    }

    joinRopes(pq);

    return 0;
}