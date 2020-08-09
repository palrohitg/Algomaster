// Sieve Based Approachs NloglogN when we have n inputs
// Problem Print the Nth prime number like 1 then 2
// 1<=n<=500000

#include<iostream>
#include<vector>
#include<bitset>
#define ll long long
using namespace std;


bitset<10000001> b;
vector<int> prime;

// Store the prime no vectors and print out the prime number
void sieve(int n) {

	b.set(); // set the bits to 1
	b[0] = b[1] = 0;

	for (int i = 4; i < 10000001; i += 2) b[i] = 0; // mark all the even number as zeroes

	prime.push_back(2);

	for (long long  i = 3; i < 10000001; i += 2 ) { //  odd number is potential answer

		if (b[i]) {
			prime.push_back(i);

			for (long long j = i * i; j < 10000001; j += i) {
				b[j] = 0; // Mark the multiple of the i is not prime
			}
		}
	}
	return;
}



int main() {

	int n; cin >> n;
	sieve();

	cout << prime[n - 1];

	return 0;
}



#include<iostream>
#include<bitset>
#define ll long long int
#include<vector>
using namespace std;

bitset<10000001> b;
vector <int> prime;

void sieve() {

	b.set();
	b[0] = b[1] = 0;

	// Marks all the even no as zeros
	for (int i = 4; i < 10000001; i = i + 2) {
		b[i] = 0;
	}
	prime.push_back(2);

	// for all the odd number
	for (int i = 3; i < 10000001; i = i + 2) {
		if (b[i]) {
			// no is prime and then push number into vectors
			prime.push_back(i);
			// Marks all the multiple of that number as no prime
			for (ll j = i * i; j < 10000001; j = j + i) {
				b[j] = 0;
			}
		}
	}
	return;
}


int main() {

	sieve();
	int t;
	cin >> t;

	while (t--) {
		int n; cin >> n;
		cout << prime[n - 1];
	}
	return 0;
}