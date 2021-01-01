// Tag : Amazon, Google

#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int rows = 2;
	int cols = 2;

	vector<vector<bool>> visited(rows, vector<bool>(cols));

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			cout << visited[i][j] << endl;
		}
		cout << endl;
	}

	return 0;
}