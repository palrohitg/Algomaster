#include <iostream>

using namespace std;

/*
	1. getBit() 2. setBit() 3. clearBit() 4. updateBit()
*/


int main() {

   // problem unique numbers 2n +1 
   // All the numbers are occurs twice in the range , but find out the unique numbers
	int n, ans=0;
	int arr[10];
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
		ans = ans ^ arr[i]; // find the unique number in the constant time
	}
	cout << "unique Number " << ans << endl;


	return 0;
}