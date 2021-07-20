#include<bits/stdc++.h>
using namespace std;

void helper(int n, char *output, int i, int open, int close, vector<string> &ans) {

	cout << "working";
	// Base Case
	if (i == 2 * n) {
		output[i] = '\0';
		cout << output << endl;
		string s(output);
		ans.push_back(s);
		return;
	}

	// Can I place ( brackets
	if (open < n) {
		output[i] = '(';
		helper(n, output, i + 1, open + 1, close, ans);
	}

	// Can I place ) brackets
	if (close < open) {
		output[i] = ')';
		helper(n, output, i + 1, open, close + 1, ans);
	}
}

vector<string> generateParenthesis(int n) {
	vector<string> ans;

	char output[20];
	helper(n, output, 0, 0, 0, ans);

	return ans;
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int n = 2;

	vector<string> res;
	res = generateParenthesis(n);

	for (auto s : res) {
		cout << s << ",";
	}

	return 0;
}