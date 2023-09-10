#include<bits/stdc++.h> 
#include<algorithm>
using namespace std;

/*
	Solve this question using recursion approaches : 
	1. use the function lower_bound function to check whether to subtract some elements found in the area or not.
	2. Fnd the usage of the elements in the next days. 
	
	upper_bound() --> Iterator return karta hai
		then base value main se - Iterator ko actually values

	upper_bound --> nearest greater value return karta hai, even == value ko bhi nahi deta
	example 10 20 30 40 50 
	num = 20 
	upper_bound() --> 30 Iteartor return karega  



*/

// int min_num_coins(int arr[], int money, int& count, int n) {

// 	if (money <= 0) {
// 		return count; 
// 	}

// 	int index = upper_bound(arr, arr + n, money); 
// 	min_num_coins(arr, money - arr[index], count + 1, n); 

// 	return -1; 
// }

int main() {
	// int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 2000}; 
	// int money; cin >> money;
	// int n = sizeof(coins)/coins[0]; 
	// // cout << min_num_coins(coins, money, 0, n); 
	// auto index = upper_bound(coins, coins+n, money); // starting index and last index and actually money 
	// cout << (index - coins)<< endl; 
	// return 0; 

  vector<int> vec{1, 2, 5, 10, 20, 50, 100, 500, 2000}; 
  auto it = upper_bound(vec.begin(), vec.end(), 100);  // Next Greater Elements Return karta hai 
  cout << "The index is " << (it - vec.begin()); // Address Minus with the current objects 
  return 0;

}