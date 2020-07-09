// Return max value in the arrays N can't be the non-negative integer

#include <iostream>
using namespace std;

// Return maxvalue in the array 

int maxValue(int a[], int n) {
    int	max = a[0];
 	for (int i = 1; i < n; ++i)
 	   {
 	   	 if (max < a[i])
 	   	 {
 	   	 	max = a[i];
 	   	 }
 	   }   

	return max; 
}

// find pair of number in arrays whose sum is equal to target varible value

void findTriplet(int a[], int n, int tar) {

}

int main() {
	int arr[10];
	int n, target;
	cin >> n;
	if (n>0) {
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
    }
    else{
    	cout << "Number can't be negative" << endl;
    }
    cin >> target;
	// cout << maxValue(arr, n);
    findPair(arr, n , target);
	return 0;
}