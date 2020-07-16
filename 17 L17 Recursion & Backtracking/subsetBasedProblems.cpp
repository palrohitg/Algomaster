/*
 !4 july
1. Subsequence Generation Recursion
2. Generate brackets Recursion
3. knapsack recursion
4. Phone keypad Problems
5. String Generation Acode recursions
*/

/*

	Subsequence Problem :
	 Input = "abc"
	 Output = all the possible subsets which occurs

*/



#include<iostream>
#include<cstring>
using namespace std;


void generate_subsequences(char *in, char *out, int i, int j) {
	// Base case
	if (in[i] == '\0') {
		out[j] = inp[i];
		cout << out;
		return;
	}
	// include the current elements
	out[j] = in[i];
	generate_subsequences(in, out, i + 1, j + 1);

	// Exclude the current elements
	generate_subsequences(in, out, i + 1, j);
	return;

}


int main() {
	char inp[] = "abc";
	char out[] = "";
	generate_subsequences(inp, out, 0, 0);
	return 0;
}