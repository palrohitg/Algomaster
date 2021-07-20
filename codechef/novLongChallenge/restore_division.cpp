

#include<iostream>
#include<vector>
#include<bitset>
#define ll long long
using namespace std;


bitset<10000001> b;
vector<int> prime;

// Store the prime no vectors and print out the prime number
void sieve() {

	b.set(); // set the bits to 1
	b[0] = b[1] = 0;

	for (int i = 4; i < 10000001; i += 2) b[i] = 0; // mark all the even number as zeroes

	prime.push_back(2);

	for (ll i = 3; i < 10000001; i += 2 ) { //  odd number is potential answer

		if (b[i]) {
			prime.push_back(i);

			for (ll j = i * i; j < 10000001; j += i) {
				b[j] = 0; // Mark the multiple of the i is not prime
			}
		}
	}
	return;
}



int main() {

	sieve();

	int t; cin >> t;
	int B[1000005];
	int P[1000005];


	while (t--) {
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> B[i];
		}


		// Nth prime compute
		for (int i = 0; i < n; i++) {
			P[i] = prime[i];
		}

		for (int i = 0; i < n; i++) {

			if (i + 1 != B[i]) {
				P[i] = P[b[i]];
			}
		}

		for (int i = 0; i < n; i++) {
			cout << P[i] << " ";
		}

		cout << endl;
	}

	return 0;
}
