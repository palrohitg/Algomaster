def merge(arr, start, end):
	pass



def mergeSort(arr, start, end):
	if start < end:
		# find the middle elements in the arrays
		mid = (start + end) // 2
		mergeSort(arr, start, mid)
		mergeSort(arr, mid+1, end)
		merge(arr, start, mid, end)

if __name__ == '__main__':
	arr = [2,1,3]
	mergeSort(arr, 0, n - 1)
	pass
#include<bits/stdc++.h> 
using namespace std; 

vector<int> merge(int arr1[], int arr2[], int n, int m) {
    vector<int> ans(n+m, 0);   

    int k = 0; 
    int i = 0; 
    int j = 0; 

    while(i < n and j < m) {
        if (arr1[i] < arr2[j]) {
            ans[k] = arr1[i];
            i++; k++; 
        } else {
            ans[k] = arr2[j];
            j++; k++; 
        }
    }

    while(i < n) {
         ans[k++] = arr1[i++];
    }

    while(j < m) {
         ans[k++] = arr2[j++];
    }

    return ans; 
}

int main() {

    int arr1[] = {1, 3, 4, 5}; 
    int arr2[] = {2, 4, 6, 8}; 
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]); 

    vector<int> ans; 
    ans = merge(arr1, arr2, n , m); 

    for (auto no : ans) {
        cout << no << " " << endl; 
    }
    return 0; 
}