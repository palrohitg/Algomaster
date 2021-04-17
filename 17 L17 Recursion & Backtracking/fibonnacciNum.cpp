#include<iostream>
using namespace std;

int f(int n) {

	if (n == 0 or n == 1) {
		return n;
	}

	int f1 = f(n - 1);
	int f2 = f(n - 2);

	return f1 + f2;
}

int main() {

	cout << f(5) << endl;

	return 0;
}


TC : (2 ^ N)
SC : O(N)