#include<bits/stdc++.h>
using namespace std;

vector<int> findMajorityElement(vector<int> v) {

	int element1 = v[0];
	int count1 = 1;

	int element2 = 0;
	int count2 = 0;

	for (int i = 1; i < v.size(); i++) {
		if (element1 == v[i]) {
			count1++;
		}
		else if (element2 == v[i]) {
			count2++;
		}
		else if (count1 == 0) {
			element1 = v[i];
			count1 = 1;
		}
		else if (count2 == 0) {
			element2 = v[i];
			count2 = 1;
		}
		else {
			count1--;
			count2--;
		}
	};;;

	// Iterate over the vec and find the n / 3 element which is greater
	count1 = count2 = 0;
	for (int i = 0; i < v.size(); i++) {
		if (element1 == v[i]) {
			count1++;
		}
		if (element2 == v[i]) {
			count2++;
		}
	}

	vector<int> ans;
	if (count1 > v.size() / 3) {
		ans.push_back(element1);
	}
	if (count2 > v.size() / 3) {
		ans.push_back(element2);
	}

	return ans;
}


int main() {

	int n; cin >> n;
	vector<int> v;

	for (int i = 0; i < n; i++) {
		int num; cin >> num;
		v.push_back(num);
	}

	vector<int> ans;
	ans = findMajorityElement(v);
	if (ans.size() == 0) {
		cout << "No Majority Elements";
	}
	else {
		for (auto num : ans) {
			cout << num << " ";
		}
	}


	return 0;
}