// https://ide.codingblocks.com/s/184797?_ga=2.217067862.1534524474.1594365361-202508360.1594137744

// Sum of all submatrix in given submatrix
/*

	Home works write the code for the 1-D arrays also and generate the sub arrays and submatrix in both the cases

	1. Brute force solutions O(n^6)
	2. Precomputations like did in the 1-D arrays O(n^4)
	3. Finally the contributions methods to findout the no of (i, j) and assing the sum values  O(n^2)

	// Query wala is new question and with implmentations right
*/

#include <iostream>
using namespace std;

// Generate the submatrix sum using the brute force approaches
void subSum(int arr[][100], int m, int n)
{

	// Outer loop to generate the top left corrdinates
	for (int li = 0; i <= n; i++)
	{
		for (int lj = 0; j <= n; j++)
		{
			// Generate the top left corner
			for (int ri = li; ri <= n; ri++)
			{
				for (int rj = lj; rj <= m; ri++)
				{
					for (int i = li;)
				}
			}
		}
	}
}

int main()
{

	int n;
	cin >> n;
	int m;
	cin >> m;
	int arr[m][n];

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	return 0;
}