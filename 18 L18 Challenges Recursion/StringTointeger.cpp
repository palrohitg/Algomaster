#include <iostream>
using namespace std;


// first change the first element and call on the remaining part 
// dry run 
void stringToInteger(char*in, int i) { //  0 -> 1, 1 -> 1, 2, 
	//base case 
	if(in[i] == '\0') {
		return;
	}

	cout << in[i] -'0';
	// recursive case
    return stringToInteger(in,i+1);
}

int main() {
    char in[] = "1234";
    stringToInteger(in,0);
	return 0;
}


// Given a string format the string by replace the same charater by the * sign

#include<iostream>
#include <cstring>
using namespace std;

// Iteratively how to think that
void stringFormat(char* str, char c, int n) {
	char out[2*n];
	int j = 0;
	for (int i = 0; i < n-1; i++) {
		if (str[i] == str[i + 1]) { // if both are same
			out[j]  = str[i];
			j++;
			out[j] = c;
			j++;
		}
		else { // simple past the content
			out[j] = str[i];
			j++;
		}

	}
	out[j] = str[n-1];
	cout << out;
}


int main() {
	char str[] = "aaabbe";
	int n = strlen(str);

	stringFormat(str,'*', n);
	return 0;

}