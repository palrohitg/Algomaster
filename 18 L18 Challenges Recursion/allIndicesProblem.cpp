// Return all the indices whose value is equal to the particular M key
// ex : 3 2 1 2 3 M = 2 so , 1, 3

#include<iostream>
using namespace std;

void  allIndicesProblem(int arr[],int i,int j, int n, int M) {
	
	// base case last value 
	if(i == n) {
		for (int i = 0; i < j; ++i)
		{
			cout << arr[i] << " ";
		}
	}

	// check the condition
	if(arr[i] == M) {
		arr[j] = i;
		j++;
	}
	allIndicesProblem(arr, i+1,j, n , M);
} 

int main(int argc, char const *argv[])
{
	int arr[100];
	//int result[100] = {0}; // it better to intialize the value to zero so it can't contain the garbage values
	int n, M;
	cin >> n;

	// Take the input
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}

	cin >> M;
	allIndicesProblem(arr,0,0,n,M);

	// Iteratively  
	// int j=0;
	// for (int i = 0; i < n; ++i)
	// {
	// 	if(arr[i] == M) {
	// 		result[j] = i;
	// 		j++;
	// 	}
	// }

	// // print the final array
	// for (int i = 0; i < j; ++i)
	// {
	// 	cout << result[i] << " ";
	// }



	return 0;
}