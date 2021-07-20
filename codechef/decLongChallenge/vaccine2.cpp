#include<bits/stdc++.h>
using namespace std;

int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int t; cin >> t;
	while (t--) {
		int number; cin >> number;
		int days; cin >> days;
		stack<int> risk;
		stack<int> noRisk;

		for (int i = 0; i < number; i++) {
			int person; cin >> person;
			if (person <= 9 or person >= 80) {
				risk.push(person);
			}
			else {
				noRisk.push(person);
			}
		}

		int minDays = 0;

		// first recovered the risk person
		while (!risk.empty()) {

			for (int i = 0; i < days; i++) {
				if (!risk.empty()) {
					risk.pop();
				}
			}
			minDays++;
		}

		// recovered the non-risk person
		while (!noRisk.empty()) {

			for (int i = 0; i < days; i++) {
				if (!noRisk.empty()) {
					noRisk.pop();
				}
			}
			minDays++;
		}
		cout << minDays << endl;
	}
	return 0;
}