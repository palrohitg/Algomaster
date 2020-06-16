/*
 Problems :
 --> Form a number which is minimal after Inverting some of digits T means replace it with 9 - t 
 --> It does not include the leading Zeroes when we convert into the binary number
 Example : 4545 return 4444
 (Minimum Elements should be inverted)
 Solution :
 	Brute force solution :
 	1. Check the digits before changing
 	2. If it less than original number
 	3. Actually change the digits 
    4. Decimal representation can't start with zeroes9
 # String :
   stoi() --> string to integer
   to_string() --> coverting to string
   1. Take the remainder and do the necessary changes one tens hundred approach them
*/

#include <iostream>
#include <string>
using namespace std;



int main() {
    long int num;
    int rem;
    long int ans=0;	
    int mul=1;
    cin >> num;
    while(num != 0) {
    	 // addeding the remainder and ones, tens digits. each time increment
    	rem = num%10;
    	if(rem >=5 && rem != 0) {
    		rem = 9 - rem;
    	}
        ans = ans + rem*mul;
    	mul = mul*10;
    	num = num/10; // take the next element/character
    	//cout << num << " ";
    }
    cout << endl << ans;
	return 0;
}