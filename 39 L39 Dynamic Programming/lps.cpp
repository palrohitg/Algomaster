// C++ program of above approach
#include <bits/stdc++.h>
using namespace std;

// A utility function to get max
// of two integers
int max(int x, int y) { return (x > y) ? x : y; }

// This is more similar to LCS we have in our answers
// Returns the length of the longest
// palindromic subsequence in seq
int lps(char* seq, int i, int j)
{

	// Base Case 1: If there is
	// only 1 character  // Second Base Case 
	if (i == j)
		return 1;

	// Base Case 2: If there are only 2 // First base Case 
	// characters and both are same
	if (seq[i] == seq[j] && i + 1 == j)
		return 2;

	// If the first and last characters match
    // If the two character will match 
	if (seq[i] == seq[j])
		return lps(seq, i + 1, j - 1) + 2; // Increment the first counters and decrement the second counters and my answers 
        // two character because i have included the two icons heres 

	// If the first and last characters
	// do not match
	return max(lps(seq, i, j - 1), lps(seq, i + 1, j)); // if the two character will not matches
    // firstly decrement the first character and then second characters we have for the logics 
}

// Driver program to test above functions
int main()
{
	char seq[] = "GEEKSFORGEEKS";
	int n = strlen(seq);
	cout << "The length of the LPS is "
		<< lps(seq, 0, n - 1);
	return 0;
}





// A Naive recursive implementation of LCS problem
// Native way to find the LCS In the code we have
#include <bits/stdc++.h>
using namespace std;

// Returns length of LCS for X[0..m-1], Y[0..n-1]
int lcs(string X, string Y, int m, int n)
{
	if (m == 0 || n == 0)
		return 0;
    // If the last elements have the commons    
	if (X[m - 1] == Y[n - 1])
		return 1 + lcs(X, Y, m - 1, n - 1);
	else
		return max(lcs(X, Y, m, n - 1),
				lcs(X, Y, m - 1, n));
}

// Driver code
int main()
{
	string S1 = "AGGTAB";
	string S2 = "GXTXAYB";
	int m = S1.size();
	int n = S2.size();

	cout << "Length of LCS is " << lcs(S1, S2, m, n);

	return 0;
}

// This code is contributed by rathbhupendra





// C++ program of above approach
#include <bits/stdc++.h>
using namespace std;

// A utility function to get max
// of two integers
int max(int x, int y) { return (x > y) ? x : y; }

// Returns the length of the longest
// palindromic subsequence in seq
int lps(char* seq, int i, int j)
{

	// Base Case 1: If there is
	// only 1 character
	if (i == j)
		return 1;

	// Base Case 2: If there are only 2
	// characters and both are same
	if (seq[i] == seq[j] && i + 1 == j)
		return 2;

	// If the first and last characters match
	if (seq[i] == seq[j])
		return lps(seq, i + 1, j - 1) + 2;

	// If the first and last characters
	// do not match
	return max(lps(seq, i, j - 1), lps(seq, i + 1, j));
}

// Driver program to test above functions
int main()
{
	char seq[] = "GEEKSFORGEEKS";
	int n = strlen(seq);
	cout << "The length of the LPS is "
		<< lps(seq, 0, n - 1);
	return 0;
}



