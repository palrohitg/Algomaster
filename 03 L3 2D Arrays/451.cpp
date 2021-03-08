// Sort the Character by the Frequency
/*
	str = "tree"
	out = "eetr" or "eert" is valid answers

	1. Make hashtable to count the character
		t - 1
		r - 1
		e - 2

	2. empty strings and append the each character depending on the count they have.

*/
#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
	// creating the vector pair
	// sort that of descending orders
	vector<pair<char, int>> v;

	// iterate over the strings and counts the occurence
	for (char ch : s) {

		v.push_back(make_pair())

	}

	int main() {

#ifndef ONLINE_JUDGE
		freopen("../input.txt", "r", stdin);
		freopen("../output.txt", "w", stdout);
#endif

		string str; cin >> str;
		string ans = frequencySort(str);
		cout << ans;

		return 0;
	}
