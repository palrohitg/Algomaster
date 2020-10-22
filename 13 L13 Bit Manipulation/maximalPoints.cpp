#include<bits/stdc++.h> 
using namespace std; 


int maximizingXor(int l, int r) {

    // iterate over all the combinations and find the maximal
    int ans = 0;      
    for (int i = l; i <= r; i++) {
        for (int j=l; j <= r; i++) {
            int cur = i ^ j; 
            if (cur > ans) {
                ans = cur; 
            }
        }
    }  

    return ans; 
}

int main() {
    
    cout << maximizingXor(10, 15); 

    return 0;
}
