// Recursion and Backtracking solved problems discussion in the video section 

#include <iostream>
using namespace std;

int fastPower(int a, int b){
	if (b==1)
	{
		return a;
	}
	return a * fastPower(a, b-1);
}

int  decreaseSequence(int n){
	if(n==1){
		return 1;
	}
	cout << n ;
    return decreaseSequence(n-1);
}

int increaseSequence(int n) {
	if(n==1){
		return 1;
	}
    increaseSequence(n-1);
	return n ;
}
// Mutliply Operation without using the * operator

// Convert string to integer using recursion :
/*
    "1234556" ==> 123445544

*/

int multiply(int a, int b){
	if(b==1){
		return a;
	}
	return a + multiply(a,b-1);

}

int main(int argc, char const *argv[])
{
	/*// cout << fastPower(2,6);
	cout << decreaseSequence(5)<<endl;	
	cout << increaseSequence(5) <<endl;*/

	cout << multiply(2,6) << '\n';

	return 0;
}