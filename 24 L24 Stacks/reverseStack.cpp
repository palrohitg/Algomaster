/*
   Different Approaches
   1. Two Stacks Done
   2. One Stack  most oftenly used
   3. Recursions
*/

#include<bits/stdc++.h>
using namespace std;

/*void showStack(stack<char> s) {
	while(!s.empty()) {
		cout << s.top() << " ";
		s.pop();
	}
}*/


/*// Using the two stack Approaches
void reversStack(stack <char> s) {
	stack <char> s1;
    while(!s.empty()) {
    	char data = s.top();
    	s1.push(data);
    	s.pop();
    }
    showStack(s1);
}
*/

// void transfer(stack <char> &s1, stack <char> & s2, int n) {
// 	for (int i = 0; i < n; i++) {
// 		s2.push(s1.top());
// 		s1.pop();
// 	}
// }

// void reverseStack(stack <char>& s1) {
// 	stack <char> s2;
// 	int n = s1.size();
// 	for (int i = 0; i < n; i++) {
// 		int x = s1.top();
// 		s1.pop();
// 		transfer(s1, s2, n - 1 - i);
// 		s1.push(x);
// 		transfer(s2, s1, n - 1 - i);
// 	}
// }

void insertAtBottom(stack <char> &s1, int data) {
	if(s1.empty()) {
		s1.push(data);
		return;
	}
	int x = s1.top();
	s1.pop();
	insertAtBottom(s1, x);
}

void reverseRecursion(stack <char>& s1) {
	if( s1.empty()) {
		return;
	}

	int x = s1.top();
	s1.pop();
	reverseRecursion(s1);
	insertAtBottom(s1, x);
}
int main() {

	stack <char> s;

	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');

	reverseRecursion(s);

	while (s.empty() == false) {
		cout << s.top() << " ";
		s.pop();
	}
	return 0;
}