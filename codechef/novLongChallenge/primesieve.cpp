// Generate the prime sieve
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int p[1000000] = {0};
int csum[1000000] = {0};


void primeSieve(int p[]) {

	// mark all the odd numbers as prime
	for (int i = 3; i <= 1000000; i = i + 2) {
		p[i] = 1;
	}

	//sieve
	for (ll i = 3; i <= 1000000; i++) {

		// if current number is prime then marks all the multiple of that numbers is not prime
		if (p[i] == 1) {

			for (ll j = i * i; j <= 1000000; j += i) {
				p[j] = 0;
			}
		}
	}
	p[2] = 1;
	p[1] = p[0] = 0;
}



int main() {

// #ifndef ONLINE_JUDGE
// 	freopen("input.txt", "r", stdin);
// 	freopen("output.txt", "w", stdout);
// #endif

	primeSieve(p);

	for (int i = 0; i <= 1000000; i++) {
		csum[i] = csum[i - 1] + p[i];
	}


	int n; cin >> n;

	for (int i = 0; i < n; i++ ) {
		int a, b; cin >> a >> b;
		cout << csum[b] - csum[a - 1];
		cout << endl;
	}


	return 0;
}