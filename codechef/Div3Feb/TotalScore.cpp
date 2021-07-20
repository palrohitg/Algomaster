/*
    Forget Mistak done : Implementation based questions
    01 then compute the length of the strings
    j = 0,1  and at which s[j] == '1' char then include the resulant score in the answer
*/


#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	vector<int> v, temp;
	map<int, int> m;
	while (t--) {
		int n; cin >> n; // participants
		int k; cin >> k;  // problems

		// Problem score associated with each problems at least k problems
		for (int i = 0; i < k; i++) {
			int score; cin >> score;
			v.push_back(score);
		}

		long long int total = 0;
		// Given strings input formats
		// Assigning the temp values to maps
		for (int i = 0; i <= n; i++) {
			string input; cin >> input;

			// iterate over the each character of the strings and whether we
			// found the 1 just include the respective score of the problems
			for (int j = 0; j <= input.length(); j++) {
				int score = 0;
				if (input[j] == '1') {
					total = score;
				}
				cout << total << endl;
			}

		}
	}



	return 0;
}