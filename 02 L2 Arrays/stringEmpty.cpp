#include<bits/stdc++.h>
using namespace std;

bool canBecomeEmpty(string str, string sub_str) {
	while (str.size() > 0) {
		// idx : to store the starting index of the sub-strings
		int idx = str.find(sub_str);
		if (idx == -1) {
			break;
		}

		// Erase the found sub-strings from
		// the original strings
		str.erase(idx, sub_str.size());
	}

	return str.size() == 0;
}

int main() {

	cout << canBecomeEmpty("geeksforgeeks", "geeks");

	return 0;
}