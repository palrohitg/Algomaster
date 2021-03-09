// Arranges the strings in descending order
// tree : eetr based on occurrence of all the elements
/*
1. Make vector of pairs int, ch
2. insert the (freuency, ch)
3. print the strings in the reverse orders
4. if the strings is long then may be the strings will not works




*/

#include<bits/stdc++.h>
using namespace std;

int countFrequency(string s, char ch) {
	// iterate over the strings
	// return the occurence of that character
	int count = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ch) {
			count++;
		}
	}
	return count;
}

string frequencySort(string s) {
	vector<pair<int, char>> vp;
	// get each character and counts the frequency
	// insert into the vector
	for (int i = 0; i < s.length(); i++) {
		vp.push_back(make_pair(countFrequency(s, s[i]), s[i]));
	}
	// Sort based on the counts of occurenece
	sort(vp.begin(), vp.end());
	// no iterate in the descending orders
	string tempAns = "";
	for (int i = vp.size() - 1; i >= 0; i--) {
		char ch = vp[i].second;
		tempAns.push_back(ch);
	}

	return tempAns;
}


int main() {

	string s; cin >> s;
	string ans = frequencySort(s);
	cout << ans;

	return 0;
}