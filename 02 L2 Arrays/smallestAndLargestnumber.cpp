// Find the smallest and the largest number in the array

#include<iostream>
#include<climits>  // gives the max and min range of the Integer can takes
using namespace std; 

//find the smallest number in the array

void findSmallestAndLargest(int arr[], int n) {
	// Maximum infinity is also going to works in this case
	int sm= INT_MAX;  // Suppose the first element is the smallest element of the array if we find another element less than the smallest one then we upadate the smallest elements
	int max = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
    	if(arr[i] < sm) {
    		sm=arr[i];
    	}
    	if(arr[i] > max) {
    		max = arr[i]; // Update the max if we find greater than the max elements
    	}
    }
    
    cout << "Smallest : " << sm << "largest : "<< max << endl;
}

int main(int argc, char const *argv[])
{
	int arr[] = {10,30,40,50,5};
	int size = sizeof(arr)/sizeof(int);
	findSmallestAndLargest(arr, size);
	return 0;
}