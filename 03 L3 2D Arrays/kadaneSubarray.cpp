/*/*
 Kadane Algo is efficient methods to find out the sum of all subarray in a given arrays
 O(N) solution using a single loops
*/
/*
#include <iostream>
using namespace std;

int Kadane(int arr[], int n) {
	int max_so_far=0;
	int max_end_here =0;
	cout << max_so_far << " " << max_end_here << endl;
	for (int i = 0; i < n; i++)
	{
		max_end_here = max_end_here + arr[i];
		if(max_end_here < 0) {
			max_end_here = 0;
		}

		if(max_so_far < max_end_here) {
			max_so_far = max_end_here;
		}
	}

	return max_so_far;
}

int main() {
	int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << Kadane(arr,n);
	return 0;
}*/

#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a = 1000000000;
	cout << a;]
	return 0;
}