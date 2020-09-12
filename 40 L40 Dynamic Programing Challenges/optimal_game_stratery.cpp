#include<iostream> 
#include<climits>
using namespace std; 

int optimal(int arr[], int i, int j) {

    // Base Case 
    

    // Recursive Case 
    int ans = INT_MIN; 
    int opt1 = arr[i] + min(optimal(arr, i + 2, j), optimal(arr, i + 1, j - 1));
    int opt2 = arr[j] + min(optimal(arr, i + 1, j - 1), optimal(arr, i, j - 2));
    ans = max(opt1, opt2); 
    
    return ans; 
}



int main() {

    int n; cin >> n; 
    int arr[100];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << optimal(arr, 0, n - 1);

    return 0;
}