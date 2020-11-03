// String is the STL containers not header files
// to the comparsion based on the lengths

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif




	int n; cin >> n;
	cin.get(); // extra space to consume

	string s[100];

	for (int i = 0; i < n; i++) {
		getline(cin, s[i]);
	}

	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}




	return 0;
}


