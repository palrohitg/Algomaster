#include<iostream>
using namespace std;

int main() {

	char r[] = {'\0'};
	int i=0;
	string s ="v";
	r[i] = 'v';
	if(s == r) {
		cout << "true";
	}
	return 0;
}