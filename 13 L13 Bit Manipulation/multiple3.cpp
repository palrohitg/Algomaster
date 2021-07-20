#include<iostream>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int n; cin >> n;

	while (n--) {

		string input;
		cin >> input;

		int count = 0;

		for (auto ch : input) {
			if (ch == '1') {
				count++;
			}
		}

		if (count == 2) {
			cout << "1" << endl;
		}
		else {
			cout << "0" << endl;
		}
	}

	return 0;
}
