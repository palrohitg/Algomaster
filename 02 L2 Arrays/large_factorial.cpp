#include<iostream>
using namespace std;

#define MAX 500


int multiply(int x , int result[], int result_size) {
	int carry=0;
	for(int i=0; i<result_size; i++) {
		int prod = result[i]*x + carry;
		// store the last digits in the result arrays
		 result[i] = prod%10;
		// store the another digits as the carry
		carry = prod/10;
	}
   // if there is any carry store in the last of the result and increase the size of result_size
	while(carry) {
		result[result_size] = carry%10; // grab the digits
		carry = carry/10; //no carry left
		result_size++; // increase the size of the arrasy
	}

	return result_size;
}

void factoiral(int n) {
	int result[MAX];
	result[0]=1;
	int result_size=1;
	for(int x=2; x<=n; x++){
       result_size = multiply(x, result, result_size);
	}
	//print the final arrays in reverse order
	for(int i=result_size-1; i>=0; i--) {
		cout << result[i];
	}
}


int main() {
	int N;
	cin >> N;
	factoiral(N);
	return 0;
}