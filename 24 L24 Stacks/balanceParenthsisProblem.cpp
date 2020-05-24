

//( (a + b)  (a * b))  Done
// () follows the LIFO orders
// Finally return the objects

#include<iostream>
#include<string.h>
#include<stack>

using namespace std;

bool checkExpression(string str) {
	stack <char> s;
	for(int i = 0; i < str.size(); i++) {
		char curChar = str[i];
		if( curChar == '(') {
			// push into the stacks
			s.push(curChar);
		}
		else if(curChar == ')') {
			// stack is empty and no open parenthesis then return false
			if(s.empty() || s.top() != '(') {
				return false;
			}
			s.pop();
		}
	}

	return s.empty();
}

int main() {
	string	exp;
	cin >> exp;

	bool isValid = checkExpression(exp);
	cout << isValid;
	return 0;
}