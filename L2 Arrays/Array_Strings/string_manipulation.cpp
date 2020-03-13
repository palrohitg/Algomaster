// Basic Working of the string 

#include <iostream>
#include <string>
using namespace std;

// stoi() and atoi() function used to convert 

// stoi() take string as the input
//atoi() take char array as an input
// convert string to integer 
int  stringToInteger(char str[], int n){
		int p=1000;
		int ans;
		if (n==1) {
			return str[0];
		}
		else {
			int r = str[0] *p;
			p = p/10;
			 ans = r + stringToInteger(str+1,n-1);
		}

		return ans;
}

int main(int argc, char const *argv[])
{

	char str[] = "1234";
	cout << stringToInteger(str,4);
	return 0;
}