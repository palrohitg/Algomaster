// uppper bound function of the given numbers
// if more than one value then return the index which has min index

#include<bits/stdc++.h>
using namespace std;

int binary_search(vector<pair<int, int>> temp, int key, int start, int end) {

	int index = INT_MAX;

	while (start <= end) {
		int mid = (start + end) / 2;

		// if the temp->value is equal to greater than store that index
		if (temp[mid].first == key) {

			// iterate over the ends
			for (int i = mid; i <= end;  i++) {
				index = min(index, temp[i].second);
			}
			break;
		}

		if (temp[mid].first > key) {

			for (int i = mid; i <= end;  i++) {
				index = min(index, temp[i].second);
			}
			end = mid - 1;
		}

		if (temp[mid].first < key) {
			start = mid + 1;
		}
	}

	if (index == INT_MAX) {
		return -1;
	}
	return index;
}


void  solution(vector<int> a, vector<int> b) {
	vector<int> ans;

	// first-> value , second->index
	vector<pair<int, int>> temp;

	for (int i = 0; i < a.size(); i++) {
		temp.push_back(make_pair(a[i], i));
	}

	// sort the temp vector pair by index
	sort(temp.begin(), temp.end());

	// for (auto p : temp) {
	// 	cout << p.first << " " << p.second << endl;
	// }

	// iterate over b and pass each elements
	for (auto key : b) {

		int index = binary_search(temp, key, 0, temp.size() - 1);
		ans.push_back(index);
		cout << index << endl;

	}
	// return ans;
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> A{2, 3, 4};
	vector<int> B{2, 3, 4};

	solution(A, B);


	return 0;
}
