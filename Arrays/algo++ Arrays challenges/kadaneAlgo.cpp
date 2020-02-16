#include<iostream>
using namespace std;
void kadaneAlgo(int a[], int n) {
	int cs=0,ms=0,i;
	for(i=0; i<n; i++) {
		cs = cs + a[i];
		if(cs < 0) {
			cs=0;
		}
		ms = max(ms,cs);
	}
	// to make the circular subarray when I reaches to n-1 then I have to make the circular
	//cout << ms;
	// cout <<i << n;
	if(i==n) {
		for(int c=0; c<i-1; c++) {
			cs = cs + a[c];
			if(cs < 0) {
				cs=0;
			}
			ms = max(ms,cs);
		}
	}
	cout << ms;
}
int main() {
	int t,c=0,n;
	cin >> t;
	while(c<t) {
		cin >> n;
		int arr[1000];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		kadaneAlgo(arr,n);
	}
	return 0;
}