// Circular Subarray maxsum
// firstly generate the elements of the circular subarrays
#include <iostream>
using namespace std;

// Brute force
void circularSubMax(int a[], int n) {
	int j;
    for(int i=0; i<n; i++) {
        for(j=i; j<n; j++) {
            // elements from i to j
            for(int k=i; k<=j; k++){
                	cout << a[k] << " ";
            }
            cout << endl;
        }
        // prints the  elements in consecutive..
        if(j == n && i != 0) {
        	for(int k=i; k<=j-1; k++) {
        		cout << a[k] << " ";
        	}
        	int c=0; // it will give all the elements but you need to separted elements only digits ++
        	while(c<i) {
                	cout << a[c] << " ";
                	c++;
            	} 
            cout << endl;
        }
     cout << endl;
    }

}

int main() {
    int arr[] = {10,20,-30,10,20};
    int n = sizeof(arr)/sizeof(int);
    circularSubMax(arr,n);
    return 0;
}
