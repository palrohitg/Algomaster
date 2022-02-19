#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	string word_1 = "geeksforgeeks";

	for (char c  : word_1) {
		cout << c << endl;
	}
	return 0;
}