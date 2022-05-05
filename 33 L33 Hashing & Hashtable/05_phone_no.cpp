#include<bits/stdc++.h> 
using namespace std;

int main() {

    vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz"
    };

    // char current_ch = '1';  
    // int index = current_ch - '0'; 
    // cout <<  index << endl; 

    vector<string> res; 
    res.push_back("");
    res.push_back("");
    cout << res.size() << endl; 
    // for (auto cand : pad[1]) {
    //     cout << "testing" << endl; 
    //     cout << cand << endl; 
    // }
    return 0; 
}


// class Solution {
// public:
//     const vector<string> pad = {
//         "", "", "abc", "def", "ghi", "jkl",
//         "mno", "pqrs", "tuv", "wxyz"
//     };
    
//     vector<string> letterCombinations(string digits) {
//         if (digits.empty()) return {};
// 		vector<string> result;
//         result.push_back("");
        
//         for(auto digit: digits) {
//             vector<string> tmp;
//             for(auto candidate: pad[digit - '0']) {
//                 for(auto s: result) {
//                     tmp.push_back(s + candidate);
//                 }
//             }
//             result.swap(tmp);
//         }
//         return result;
//     }
// }

// Two pointer aproach::
bool find3Sum(int arr[], int arr_size, int sum) {
    int l, r; 
    sort(arr, arr+arr_size);

    for (int i = 0; i < arr_size - 2; i++) {
        int left = i + 1; 
        int right = arr_size - 1; 

        while(left < right) {
            if ()
        }
    }

}

