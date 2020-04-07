/*
Print the Nth prime number suppose the range is 100 maxsize

*/

#include<iostream>
#define MAX  100000001
#define ll long long int
int prime[MAX];

using namespace std;

void n_Prime(int prime[], int max_size, int n) {
	// Special Case 
	prime[0]=prime[1]=0;
	prime[2]=1;

	// Set all the odd number as prime range from 3 - Maxsize-1
	for(int i=3; i<max_size; i+=2) {
		prime[i]=1;
	}

	// Make the multiple of all number as non prime
	for(ll i=3; i<max_size; i+=2) {
		for (ll j = i*i ; j < max_size; j += i) 
		{
			if(prime[j] == 1) {
				prime[j]=0; // set as non prime
			}
		}
	}

	// check for the nth Postion 
	int temp=0;
	for(int i=0; i<max_size; i++) {
		if(prime[i] == 1) { // if its prime then 
			temp++;
			if(temp == n) { // it temp reaches to n pos then prime it anotherwise keep increment it
				cout << i;
			}
		}
	}

}

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	n_Prime(prime,MAX,n);
	return 0;
}