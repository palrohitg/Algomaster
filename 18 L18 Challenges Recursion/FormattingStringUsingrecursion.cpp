
//  Hello --  Hel*lo, aaaaaa - > a*a*a*a*a*a

// Approach : Create  a ouput String which contain the result with formatting

#include<iostream>
#include<cstring>

using namespace std;

// Recursive Algorithm 
void stringFormat(char *str,int i, int n) {
	// Base case if i to n 
	if(i == n) {
		return;
	}

	cout << str[i];

	// we consequent character are equal then print the special charater 
	if(str[i] == str[i+1]) {
		cout << '*';
	}
	// Recursive call to the next part
	stringFormat(str,i+1,n);
}

int main() {

	char str[10001] ="aaaaa";
	int n = strlen(str);

	// for(int i=0; i<n; i++) {
	// 	cout << str[i];
	// 	if(str[i] == str[i+1]) {
	// 		cout << '*';
	// 	}
	// } 
	stringFormat(str,0,n);
	return 0;
} 