// No of ways to reach the ladders
#include<iostream>
using namespace std;

// find no of ways to reaches the ladders
// jump = 1,2,3
// The Problem can be Derive the solutions with k etc.
// https://leetcode.com/discuss/interview-experience/637486/amazon-sde1-hyderabad-apr-2020-offer/

int ways(int n) {

    // Base case
    if (n <= 0) {
        return 1;
    }
    if (n == 1) {
        return 1;
    }

    // Recursion case
    return ways(n - 3) + ways(n - 2); + ways(n - 1);
}


int main() {

    int n; cin >> n;
    cout << ways(n);

    return 0;
}

