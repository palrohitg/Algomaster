/*
 First lecture of the bitwise operator :
 Topic : Bitwise operator and the shift operator
 Bitwise operator :
 1. & AND
 2. | OR
 3. ~ NOT flip the bit if 1 then ~1 = 0
 4. ^ XOR also called exclusive OR means Exactly one bit is one get True

 Shift operator :
 1. Left shift << --> Multiplication in Terms of two ki power
 2. Right shift >> --> Divison in terms of power of 2

 Example : a=5, a << 1  means
          00000101 --> 00001010(10) means 5*2
          a >> 1 if(10) 00001010 then 00000101(5) means 10/2
*/
/*
  Problem : find the unique no in the list of number
   if using the arrays may be you have to make the frequency of the arrays.
   But for the effective solution we can use the property of  XOR operator
*/

#include<bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  int n = 5;
  cout << ~(n) << endl;

  return 0;
}