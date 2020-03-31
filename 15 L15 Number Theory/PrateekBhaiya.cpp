/*
 Prime Sieve is nothing but the Efficient way of generating a range of prime numbers with complexity of O(nloglogn)
 Approach :
 1. Mark all the even number as non prime. Basically it set the 1 where is prime and 0 where is non prime number exists in the arrays
 2. Compute in power of n
 3. Simple return the number to at the position because the new arrays only contain the prime number upto N
*/


#include <iostream>
using namespace std;
#define ll long long
void primeSieve(int p[]) {

	// odd number is set to be 1 because they are like prime
	for(ll i=3; i<n; i+=2) {
		p[i] = 1;
	}

	for(ll j=3; j<1000000; j+=2){
		if(p[j] == 1) {
			for(ll i=j*j; i<1000000; i+=j){
				p[i] =0;
			}
		}
	}

	// special case 
	p[2]=1;
	p[1] = p[0] = 0;
}

int main() {

	int n;
    int p[1000000] = {0}; 
	cin >> n;

    primeSieve(p);
	// call the primeSieve
	for(int i=0; i<n; i++) {
		if(p[i] == 1) {
			cout << i << " ";
		}
	}
	return 0;
}