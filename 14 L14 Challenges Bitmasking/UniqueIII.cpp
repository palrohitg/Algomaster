/*
  1.find the number which is presented only onces in arrays with In linear space and time using bitwise
  2.Brute force approach make like a frequency table and then check which frequency is one
  3. To convert the digits and then take up the sum and then finally convert into the Decimal number
*/

/*
 Note than arr[64] is always count in Contest Space because we are not using N

*/

#include<iostream>
using namespace std;
int main() {
     int count[64] = {0};
     int n;
     cin >> n;
     for(int i=0; i<n; i++) {
     	int no;
     	cin >> no;

     	// sum the arrays and calculate the sum in the same arrays then there is no need to separately store that array
     	int j=0;
     	while(no>0) {
     		int last_bit = (no & 1); // exact the last of bit of the number
     		count[j] = count[j] + last_bit;// store the sum frequency and increase the one by bit
     		j++;
     		no = no >> 1; // extact the next bit	
     	}
     }

     // print out the next count to 
     int ans=0;
     int p=1;
     for(int i=0; i<64; i++) {
     	count[i] = count[i]%3;
        ans += (p*count[i]);
     	p = p*2; 	
     }
     cout << ans;
	return 0;
}