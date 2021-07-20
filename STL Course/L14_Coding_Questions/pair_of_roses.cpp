// Same as target Sum pairs problems 
#include<bits/stdc++.h> 
using namespace std; 


int main() {

    int t; cin >> t; 

    while(t--) {

        int n; cin >> n; 
        int *arr = new int[n]; 

        // Take the user inputs 
        for (int i = 0; i < n; i++) {
            int data; cin >> data; 
            arr[i] = data; 
        }

        int target; cin >> target; 

        // sort the elements 
        sort(arr, arr + n); 

        // Two pointer approaches to solve this problems 
        int left = 0; 
        int right = n - 1; 
        int diff = INT_MAX;
        int rose1 = INT_MAX; 
        int rose2 = INT_MAX;

        while(left < right) {

            // check if both sum is equal to target 
            if (arr[left] + arr[right] == target) {
                
                int cur_diff = arr[left] < arr[right] ? arr[right] - arr[left] : arr[left] - arr[right]; 
                if (cur_diff < diff) {
                    diff = cur_diff; 
                    rose1 = arr[left]; 
                    rose2 = arr[right];
                    right--; 
                    left++;
                }
            }
            else if (arr[left] + arr[right] > target) {
                // decrease the right most value; 
                right--; 
            }
            else {
                left++; 
            }

        }

        // print the answer here 
        cout << "Deepak should buy roses whose prices are " << rose1 << " and " << rose2 << "." << endl; 
        delete [] arr; 

    }


    return 0; 
}