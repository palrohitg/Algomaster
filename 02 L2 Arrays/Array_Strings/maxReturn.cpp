// Return the maximum value return in an array 
// input --> 5 4 3 5 6 then output --> 6

#include <iostream>
using namespace std;

// function to return the Maximum value in an array
// failure of one test case --> soluation work on the dynamic memory allocation
int max_value(int arr[], int n) {
	int max = arr[0];
	for (int i = 0; i < n; ++i)
	{
		if (max < arr[i+1])
		{
			max = arr[i+1];
		}
	}

	return max;
}

int main()
{
	int arr[100];
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	cout << max_value(arr, n);

	return 0;
} 