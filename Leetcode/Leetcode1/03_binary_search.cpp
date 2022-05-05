#include<bits/stdc++.h>
using namespace std;

// TC : O(logn) SC : O(1)
bool binary_search(vector<int> v, int start, int end, int search_element) {

    while (start <= end) {
        int mid = start + (end - start) / 2; 
        if (v[mid] == search_element) {
            return true; 
        } else if (v[mid] > search_element) {
            end = mid - 1; 
        }  else {
            start = mid + 1; 
        }
    }
    return false; 
}


int main() {    

    vector<int> v;
    int n; cin >> n; 
    for (int i = 0; i < n; i++) {
        int data; cin >> data; 
        v.push_back(data);
    }
    bool ans = binary_search(v, 0, 3, 50);
    cout << ans << endl;  

    return 0;
}