/*
 Bit manipulation Some Import usasge of Bitwise operator with function
 1. Even or odd with & 
 2. getBit() -->   (N&(1 << i)) > 0 ?:1:0
 3. setBit() -->  Only perform the OR operation
 4. clearBit() --> take the mask and then negate it and then further perform the operation
 5. updateBit(number,pos,newbit) -->
 6. clearrangeofBit ---> a , b, mask then retunr the n &mask
*/

#include<iostream>
using namespace std;

bool isodd(int n) {
    return (n & 1); // return one in case of odd
}


// Create a mask 
/*int getbit() {
	int mask =1;
	cout << mask;
  return 0;
}
*/
//clear bit clear a particular bit
int clearBit(int n, int i) {
	int mask = ~(1<<i); // masks is ready
	return n & mask;
}

// find out the number of set bit in the Integer in Binary form
int setBit(int n) {
 int set = 0;
  while(n>0) {
  	n = n & (n-1);
  	set++;
  }	
  return set;
}
int updateBit(int n, int i, int v) {
	int mask = ~(1<<i);
	int cleared_bit_number = n&mask;
	n = cleared_bit_number|(v<<i);
	return n;
}

int clearedLastBit(int n, int i) {
	int mask = (-1 << i);
	return n & mask;
}

int clearedFromTtoJ(int n, int i,int j) {
	int ones = (~0);
	int a = ones << (j+1);
	int b = (1<<i)-1;
	int mask = a|b;
	int ans = n &mask;
	return ans;
}

int main() {
     
     /*cout << isodd(3) << endl;
     cout << clearBit(10,3) << endl;
     cout << clearedLastBit(15,2) << endl;*/
	cout << setBit(1) << endl;
    cout << (4&1) << endl;
	return 0;
}

