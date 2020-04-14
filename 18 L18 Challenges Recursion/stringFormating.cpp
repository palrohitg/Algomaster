// Given a string format the string by replace the same charater by the * sign

#include<iostream>
#include <cstring>
using namespace std;

// Iteratively how to think that
void stringFormat(char* str, char c, int n) {
	char out[100];
	int j = 0;
	for (int i = 0; i < n; i++) {
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
	//out[j+1] = '\0';
	cout << out;
}


int main() {
	char str[] = "aaabbe";
	int n = strlen(str);

	stringFormat(str,'*', n);
	return 0;

}