#include<bits/stdc++.h>
using namespace std;


int squareRoot(int target) {

	int i = 0;
	while (i * i <= target) {
		i++;
	}

	return i - 1;
}


int main(int argc, char const *argv[])
{
	int target = 16;
	cout << squareRoot(target);
	return 0;
}