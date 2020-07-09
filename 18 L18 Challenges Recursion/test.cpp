#include<iostream>
using namespace std;
bool fun() {

	bool a = true;
	bool b = true;
	return a+b;	
}
int main(int argc, char const *argv[])
{
	cout << fun();
	return 0;
}