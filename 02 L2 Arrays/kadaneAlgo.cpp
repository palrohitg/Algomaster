#include <iostream>
using namespace std;

// when i have at least one positive number 
// In this case return 0

int main() {
   int arr[] = {-2,1,-3,4,-1,2,1,-5,4}; // return -1
   int n = sizeof(arr)/sizeof(arr[0]);
   int ms=0, cs=0, mx_negative = INT_MIN;
   for(int i=0; i<n; i++) {
   	cs = cs + arr[i];
   	if(cs < 0) { // if cs is negative then make it 0
   		cs=0;
   	}

   	if(ms < cs) {
   		ms=cs;
   	}

   	if(mx_negative < arr[i]) {
   		mx_negative = arr[i];
   	}
   }

   // In case my ms is 0ee
   if(ms == 0) {
   	ms = mx_negative;
   }

   cout << ms << endl;
   return 0;
}