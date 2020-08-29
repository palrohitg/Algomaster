// length of the strings hashset contains only the uniques elements  
// Brute force approaches check the next elements present in the arrays or not 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; 


int maxlen(vector<int> v) {

    int longestStreak = 0; 
    for(auto it = v.begin(); it != v.end(); it++) {
        
        int curNum = *it;
        int curStreak = 1;

        // Iterate over the vectors untill be are able to find the next consective elements 
        while(binary_search(v.begin(), v.end(), curNum + 1)) {
            curNum += 1;
            curStreak += 1;  
        }

        // maximum value 
        longestStreak = max(longestStreak, curStreak);
        cout << longestStreak << " ";
    }

    return longestStreak;
}



int main() {

    vector<int> v {100, 4, 200, 1, 3, 2};
    cout << maxlen(v);
    return 0;
}