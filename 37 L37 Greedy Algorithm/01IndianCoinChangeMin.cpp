// C++ program to find minimum
// number of denominations
#include <bits/stdc++.h>
using namespace std;

// All denominations of Indian Currency
int deno[] = { 1, 2, 5, 10, 20,
			50, 100, 500, 1000 };
int n = sizeof(deno) / sizeof(deno[0]);

void findMin(int V)
{
	sort(deno, deno + n);

	// Initialize result
	vector<int> ans;

	// Traverse through all denomination
	for (int i = n - 1; i >= 0; i--) {

		// Find denominations take that coin untill we have this coins 
		// If last money is then greater than we will be going to insert each times. 
		while (V >= deno[i]) {
			V -= deno[i];
			ans.push_back(deno[i]);
		}
	}

	// Print result
	for (int i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
}

// Driver program
int main()
{
	int n = 40;
	cout << "Following is minimal"
		<< " number of change for " << n
		<< ": ";
	findMin(n);
	return 0;
}

/*
Complexity Analysis: 

Time Complexity: O(V).
Auxiliary Space: O(V).*/