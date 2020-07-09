#include <iostream>
using namespace std;
int rainHarvesting(int a[] , int n) {
	// left max
    int left[1000] = {0};
    for(int i=0; i<n; i++) {
    	for(int j=0; j<=i; j++) {
    		//if the values is greater or equal than current index store in the left otherwise increment till
    		if(a[j] >= left[i]) {
    			left[i] = a[j];
    		}
    	}
    }

    //right max
    int right[1000] = {0};
    for(int i=n-1; i>=0; i--) {
    	for(int j=i; j<n; j++) {
    		if(a[j] >= right[i]) {
    			right[i] = a[j];
    		}
    	}
    }

    int ans=0;
    for(int d=0; d<n; d++) {
    	int minMinus = min(left[d],right[d]) - a[d];
    	ans = ans + minMinus;
    }
 return ans;
}
int main()  {
	int arr[1000];
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	} 
	cout << rainHarvesting(arr,n);
	 
	return 0;
}