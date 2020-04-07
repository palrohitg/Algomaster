#include<iostream>
using namespace std;
#define MAX_SIZE 10000001
#define ll int long  long
ll a[MAX_SIZE] = {0};

// Prime Sieve means arrays of all primes number
void  primeSieve(ll a[], int n) {

    // set all the odd number start from 3 are prime
    for (int i = 3; i < MAX_SIZE; i += 2) {
        a[i] = 1;
    }

    for (int i = 3; i < MAX_SIZE; i += 2) {
        if (a[i]) {
            for (ll j = i * i; j < MAX_SIZE; j += i) {
                if (a[j]) {
                    a[j] = 0;
                }
            }
        }
    }

    // special case :
    a[0] = a[1] = 0;
    a[2] = 2;
    int prime[5000000] = {0};
    int k = 1;
    for (int  i = 0; i < MAX_SIZE; i++) {
        if (a[i]) {
            prime[k++] = i;
        }
    }

    for(int i=1; i<MAX_SIZE; i++) {
        if(i == n) {
            cout << prime[i];
        }
    }
}





    int main() {
        int n;
        cin >> n;
        primeSieve(a, n);
        return 0;
    }