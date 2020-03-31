/*memset function is used to set the value of the whole to only one value
Otherwise all the old for loop methods is gernerally used
2 is only the even prime number all the other are odd number
Note : N = 5000000
 */


#include <iostream>
#define ll long long 
using namespace std;

void  primeSieve(int arr[], int n) {
   // marks all odd number starting from 3 as prime number 
	for(int i=3; i<=n; i+=2) {
		arr[i] = 1;
	}

	for(int i=3; i*i<=n; i++) {
		if(arr[i] == 1){
			for(ll j=i*i; j<=n; j=j+i) {
				arr[j] = 0; // all other are prime numbers
			}
		}
	}
    
    //set special case 
    arr[2]=1;
    arr[0] = arr[1] = 0;
	// for(ll i=0; i<=n;i++) {
	// 	cout << arr[i] << " " ;
	// }
	// cout << endl;
	// all the prime number with n range
	for(int i=2; i<=n; i++) {
		if(arr[i]) { // if prime then print the number
			cout << i << " ";
		}
	}
}

int main() {
	int n;
	cin >> n;
	int arr[n+1] = {0};
	// for(ll i=0; i<=n;i++) {
	// 	cout << arr[i] << " " ;
	// }
	// cout << endl;
	primeSieve(arr,n);
	return 0;
}