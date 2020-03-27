#include<iostream>
using namespace std;
int main() {
	int temp =3;
	int pos = 0;
    while((temp&1) != 1) {
    	pos++;
    	temp = temp >> 1;
    }
    cout << pos;
	return 0;
}