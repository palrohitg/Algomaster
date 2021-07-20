#include<bits/stdc++.h> 
using namespace std; 


// int maximizingXor(int l, int r) {

//     // iterate over all the combinations and find the maximal
//     int ans = 0;      
//     for (int i = l; i <= r; i++) {
//         for (int j=l; j <= r; i++) {
//             int cur = i ^ j; 
//             if (cur > ans) {
//                 ans = cur; 
//             }
//         }
//     }  

//     return ans; 
// }

// if two number have same than max is 0 and to one iteratations 
int maximizingXor(int l, int r) {
    int max = 0; 
    if (l == r) {
        max = 0; 
    }
    else { 
        // iterate over the ranges and update the max xor 
        for (int i = l; i <= r; i++) {
            int res = l ^ i; 
            if ( res > max) {
                max = res; 
            }
        }
    }
    return max; 
}



int main() {
    
    cout << maximizingXor(10, 15); 

    return 0;
}
