#include<iostream>
using namespace std;

int squareNum(int num) {
	int square =0;
	int last_digits=0;
	while(num >= 1) {
		last_digits = num%10; 
		square += last_digits * last_digits;
		num = num/10; // remove one digits from the number
	}

	return square;
}

bool isHappy(int num) {
	int happy=0; // by default number is not happy
	int result=0;
	while(1) { // true make infinite loop
		result = squareNum(num);
		if(result == 1) {
			happy = 1;
			break;
		}
	}
	return happy;
}

int main() {
	int num;
	cin >> num;
	cout << isHappy(num) << endl;
	return 0;
}