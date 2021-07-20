#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	char search[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
	                 'o', 'p'
	                };

	int t; cin >> t;

	while (t--) {
		int n; cin >> n;
		string str; cin >> str;
		int count = 0;
		for (int i = 0; i < n; i = i + 4) {
			int temp = 8;
			int total = 0;

			for (int j = 0; j < 4; j++) {
				char ch = str[count];
				if (ch == '1') {
					total += temp;
				}
				temp = temp / 2;
				count++;
			}
			cout << search[total];
		}
		cout << endl;

	}

	return 0;
}