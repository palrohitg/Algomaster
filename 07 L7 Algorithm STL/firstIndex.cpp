// uppper bound function of the given numbers

#include<bits/stdc++.h>
using namespace std;

void solution(vector<int> a) {

	sort(a.begin(), a.end());

	bool ans = binary_search(a.begin(), a.end(), 10);

	cout << ans;
	// auto index = upper_bound(a.begin(), a.end(), 7);
	// cout << index - a.begin() << endl;

}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	vector<int> A{9, 1};
	vector<int> B{7, 10, 3};

	solution(A);


	return 0;
}
