// one piece of cut kargu and baki profit will be given by the recursion 
// same for the top down and bottom up dp  

// complexity will be O(n^2) and because we are for particular value ko fill karne ke liye N times Work i have to do 
#include<iostream>
using namespace std; 

// recursive approaches 
int maxProfit(int priceOfEachLen[], int totalLen) {

    // Base case 
    if (totalLen == 0) return 0; 

    int best = 0;
    for(int len = 1; len <= totalLen; len++) {
        int netProfit = priceOfEachLen[len] + maxProfit(priceOfEachLen, totalLen - 1);
        best = max(best, netProfit);
    }

    return best;
}


int main() {

    int priceOfEachLen[100];
    int totalLen; 
    cin >> totalLen;

    for(int eachPiece = 1; eachPiece <= totalLen; eachPiece++) {
        cin >> priceOfEachLen[eachPiece];
    }

    int ans = maxProfit(priceOfEachLen, totalLen);

    return 0;
}