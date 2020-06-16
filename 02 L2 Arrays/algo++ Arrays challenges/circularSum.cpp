#include <iostream>
using namespace std;

int kadaneAlgo(int a[], int n) {
	// for Non linear
	int cs=0,ms=0;
	for(int i=0; i<n; i++) {
		if(cs < 0) {
			cs=0;
		}
		cs = cs + a[i];
		if(cs > ms) {
			ms = cs;
		}
	}
	return ms;
}

int circularSum(int a[], int n) {
	// for Circular fashion 
	int max_kadane = kadaneAlgo(a,n);
	int max_sum = 0;
	for(int i=0; i<n; i++) {
		max_sum += a[i];
		a[i] = -a[i];
	}

	// compute the maxSum means the minimum sum of the elements 
	 max_sum =  max_sum + kadaneAlgo(a,n);

	 return (max_sum > max_kadane) ? max_sum : max_kadane;
}


int main(int argc, char const *argv[])
{
	int t,c=0,n;
	cin >> t;
	int arr[1000];
	while(c<t){
		cin >> n;
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		cout << circularSum(arr,n);
		c++;
	}
	return 0;
}