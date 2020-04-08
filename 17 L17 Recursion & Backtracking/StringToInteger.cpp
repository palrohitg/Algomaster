/*
	Covert String to Integer using Recursion 
	"1234" --> 1234
	char array --> integer

	Exact digits 
*/

#include<iostream>
#include<cstring>
#include<typeinfo>
using namespace std;
// But need to Figure out how to do it Reursively

void stringToInteger(char array[], int len) {
	if(len == 0) {
		return;		
	}
	stringToInteger(array+1,len-1);
	cout << array[0]-'0';
}

// Iterate way of doing this b
int main() {

	char array[] = {'1','2','3','4','\0'}; // must be 5
	int len = strlen(array);
	// int result=0;
	// for(int i=0; i<len; i++) {
	// 	result *= 10; 
	// 	result += array[i] -'0';
	// }

	//cout << result <<endl;
	stringToInteger(array,len);
	return 0;
}