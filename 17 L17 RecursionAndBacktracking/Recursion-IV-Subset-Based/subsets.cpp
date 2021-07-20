#include<bits/stdc++.h>
using namespace std;

void subsets(char *input, char *output, int i, int j) {
	// Base Case
	if (input[i] == '\0') {
		output[j] = '\0';
		cout << output << endl;
		return;
	}

	// include the first character
	subsets(input, output, i + 1, j);
	output[j] = input[i];
	subsets(input, output, i + 1, j + 1);

	return;
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char input[100], output[100];
	cin >> input;

	subsets(input, output, 0, 0);

	return 0;
}