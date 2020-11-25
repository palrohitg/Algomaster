// Build a calculator to evaluate the expression
/*
	learning :
	1. You about strings and the datatypes how to convert the strings into integers
	2. Power operations to form numbers
	3. How the expression is evaluated in terms of stacks

	Problems :
	1. Calculator-I
	2. Calculator-II
	3. Calculator-III

*/

#include<bits/stdc++.h>
using namespace std;

int calculate(string s) {

	stack<int> st;
	int num = 0;
	int result = 0;
	int sign = 1;

	for (char c : s) {

		// check if the current character is digits or not
		if (isdigit(c)) {
			num = num * 10 + (c - '0'); // integer values
		}
		else {

			if (c == '+') {
				result += sign * num;
				num = 0;
				sign = 1;
			}

			if (c == '-') {
				result += sign * num;
				num = 0;
				sign = -1;

			}

			if (c == '(') {

				st.push(result);
				st.push(sign); // insert at last so it pop out first

				// reset the result and sign bit
				result = 0;
				sign = 1;

			}

			if (c == ')') {

				result += sign * num;
				num = 0;
				result *= st.top(); // sign bit multiplication with subproblems
				st.pop();
				result += st.top(); // add the previous results
				st.pop();
			}
		}
	}

	if (num != 0) result += sign * num;
	return result;
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s; cin >> s;
	cout << calculate(s);


	return 0;
}