#include<iostream>
using namespace std;

int main() {
	int *arr = new(nothrow) int [10];
	for (int i = 0; i < 10; i++) {
		arr[i] = i;
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << arr[i] << " ";
	}

	delete[] arr;
	return 0;
}