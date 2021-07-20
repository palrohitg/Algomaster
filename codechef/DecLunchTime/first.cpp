#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	int n; cin >> n;
	int *spiralArray = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> spiralArray[i];
	}
	int *temp = new int[n];
	int i = 0;
	int j = n - 1;
	int k = -1;
	int flag = 0;

	if (spiralArray[i] <= spiralArray[j] and k < 0) {
		k++;
		temp[k] = spiralArray[i];
		k++;
		temp[k] = spiralArray[j];
		i++;
		j--;
	}

	while (i < j) {
		if (spiralArray[i] <= spiralArray[j] and temp[k] <= spiralArray[i]) {
			k++;
			temp[k] = spiralArray[i];
			k++;
			temp[k] = spiralArray[j];
			i++;
			j--;
		}
		else {
			flag = 1;
			break;
		}
	}

	if (flag == 0) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}