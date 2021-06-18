// AFL technique is used to revise the algorithm that you have already learnt based on the time-spam in fibonnaci series 

#include<iostream>
using namespace std;


// Good approaches
bool isOdd(int num){
	return num % 2 == 1;
}


// bad approaches
bool isOdd(int num) {

	if(num % 2 == 0) { // unneccessary if condition 
		return true;
	}
	else {
		return false;
	}
}

int main() {
	cout << isOdd(0);
	return 0;
}