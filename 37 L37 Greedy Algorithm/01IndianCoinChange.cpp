#include<bits/stdc++.h> 
using namespace std;

/*
	upper_bound() --> Iterator return karta hai
		then base value main se - Iterator ko actually values

	upper_bound --> nearest greater value return karta hai, even == value ko bhi nahi deta
	example 10 20 30 40 50 
	num = 20 
	upper_bound() --> 30 Iteartor return karega 

*/

int min_num_coins(int arr[], int money, int& count, int n) {

	if (money <= 0) {
		return count; 
	}

	int index = upper_bound(arr, arr + n, money); 
	min_num_coins(arr, money - arr[index], count + 1, n); 

	return -1; 
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("./input.txt", "r", stdin);
	freopen("./output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 5, 10, 20, 50, 100, 500, 2000}; // 0 1 2 3 4 
	int money; cin >> money;
	int n = sizeof(arr)/arr[0]; 
	// cout << upper_bound(arr, arr+n, 20) - arr  - 1 << endl; 

	cout << min_num_coins(arr, money, 0, n); 
	


	return 0; 
}