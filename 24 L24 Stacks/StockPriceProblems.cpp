/*
	1. how many days i will travel in the past so the current current price is less than the past days
    2. Brute Force O(n^2)
	
*/

#include<iostream>
using namespace std;



int main() {
	int price[] = {100, 80, 60, 70, 60, 75, 85};
	int n = sizeof(price)/sizeof(int);
	int span[n] = { 0 };


	for(int i = 0; i < n; i++) {
		cout << span[i] << " ";
	}
	cout << endl;
	int i;
	for(i = 1; i < n; i++) {
		int j = i-1;
		int count = 0;
		while(j >= 0) {
			// check if the previous price is greater than the cur price
			if(price[i] < price[j]) {
				count = count + 1;
				span[i] = count;
				break;
			}
			count = count + 1;	
			j--;
		}

		// Finally if the past price is less than the current one the simply make it zero;
	}	

	for(int i = 0; i < n; i++) {
		cout << span[i] << " ";
	}
	return 0;
}