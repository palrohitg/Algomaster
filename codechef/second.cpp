#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin >> t;
	vector<int> v, temp;
	map<int, int> m;
	while (t--) {
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			int num; cin >> num;
			v.push_back(num);
			temp.push_back(num);
		}

		// sort the temp arrays
		sort(temp.begin(), temp.end(), greater<int>());

		// Assigning the temp values to maps
		for (int i = 1; i <= n; i++) {
			m[i] = temp[i - 1];
		}

		for (int i = 0; i < n; i++) {

			int query = v[i];
			// cout << query << " ";
			auto next_it = m.begin();
			for (auto it = m.begin(); it != m.end(); it = next_it) {
				next_it = next_it++;
				if (it->second == query) {
					int hour = it->first;
					cout << hour << " ";

					// 		// remove the element in the hashmaps
					m.erase(it->first);
				}
				// cout << it->first << " ";
			}
			cout << endl;
		}
		cout << endl;
		v.clear();
		temp.clear();

	}



	return 0;
}