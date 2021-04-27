#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	// reading sentences and the paragraphs in c++
	// getline and readline functions

	cout << "test";

	char a[1000];
	char ch = cin.get();

	int i = 0;

	while (ch != '\n') {
		a[i] = ch;
		i++;
	}

	a[i] = '\0';

	cout << a << endl;

	cout << "test";


	return 0;
}