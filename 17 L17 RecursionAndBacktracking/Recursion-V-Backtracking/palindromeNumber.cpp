/*
 Approach : tag : easy questions
 input : 121 single digits number or -121
 a. Convert the number to strings and check whether the number is palindromic or not
 b. reverse the numbers
*/

class Solution {
public :
	bool isPalindrome(int x) {
		if (x < 0 || (x != 0 and x % 10 == 0)) return false;
		int sum = 0;
		while (x > sum) {
			sum = sum * 10 + x % 10;
			x = x / 10;

		}
		return (x == sum) || (x == sum / 10);
	}

};