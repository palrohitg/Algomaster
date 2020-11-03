#include<bits/stdc++.h>
using namespace std;

// Return the string of particular key values
string extractStringAtKey(string s, int key) {

	char *res = strtok((char *)s.c_str(), " ");

	while (key > 1) {
		res = strtok(NULL, " ");
		key--;
	}

	return (string)res;
}


// Convert the string into integers
int convertToInt(string s) {

	int ans = 0;
	int p = 1;

	for (int i = s.length() - 1; i >= 0; i--) {
		ans += ((s[i] - '0') * p);
		p = p * 10;
	}

	return ans;
}

bool lexCompare(pair<string, string> s1, pair<string, string> s2) {

	string key1 = s1.second;
	string key2 = s2.second;

	return key1 < key2;

}


bool numericCompare(pair<string, string> s1, pair<string, string> s2) {

	string key1 = s1.second;
	string key2 = s2.second;

	return convertToInt(key1) < convertToInt(key2);
}



int main() {

	/*
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	*/
	int n; cin >> n;
	cin.get();

	string a[100];

	for (int i = 0; i < n; i++) {
		getline(cin, a[i]);
	}

	int key; cin >> key;
	string reversing, ordering;
	cin >> reversing >> ordering;

	// Sort the string and key in pair class
	pair<string, string> p[100];

	for (int i = 0; i < n; i++) {
		p[i].first = a[i];
		p[i].second = extractStringAtKey(a[i], key);
	}

	// sort the string
	if (ordering == "numeric") {
		sort(p, p + n, numericCompare);
	}
	else {
		sort(p, p + n, lexCompare);
	}

	if (reversing == "true") {
		for (int i = 0; i < n / 2; i++) {
			swap(p[i], p[n - i - 1]);
		}
	}

	for (int i = 0; i < n; i++ ) {
		cout << p[i].first << endl;
	}

	return 0;
}