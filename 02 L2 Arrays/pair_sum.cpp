#include<bits/stdc++.h> 
using namespace std;


vector<int> findPair(vector<int> nums, int n, int target) {
    
    unordered_map<int, int> umap; 

    for (int i = 0; i < nums.size(); i++) {
        if (umap.find(target - nums[i]) != umap.end()) {
            return {}, {}
        }
        umap[nums[i]] = i; 
    }



    return; 
}


int main() {




    return 0; 
}