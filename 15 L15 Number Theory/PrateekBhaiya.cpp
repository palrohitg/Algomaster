/*
 Prime Sieve is nothing but the Efficient way of generating a range of prime numbers with complexity of O(nloglogn)
 Approach :
 1. Mark all the even number as non prime. Basically it set the 1 where is prime and 0 where is non prime number exists in the arrays
 2. Compute in power of n
 3. Simple return the number to at the position because the new arrays only contain the prime number upto N
*/


#include <iostream>
using namespace std;
#define max_size 100000001
#define ll long long
void primeSieve(int p[]) {

	// odd number is set to be 1 because they are like prime
	for(ll int  i=3; i<max_size; i+=2) {
		p[i] = 1;
	}

	for(ll int j=3; j<max_size; j+=2){
		if(p[j] == 1) {
			for(ll int  i=j*j; i<max_size; i+=j){
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
    cin >> n;
    int p[max_size] = {0};  //how size should be declared

    primeSieve(p);
    int prime[n];
    int j=1;
	// call the primeSieve
	for(int i=3; i<max_size; i++) {
		if(p[i] == 1) {
			prime[j] = i;
			j++; 
		}
	}
	int num;
	cout << "Enter the number :"; 
	cin >> num;
	for(int i=1; i<n; i++) {
		if(i == num){
			cout << prime[i];
		}
	}

	return 0;
}