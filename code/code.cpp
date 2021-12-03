#include<iostream>
using namespace std;


/*
- Arrays is always passed by reference 
 
*/
void checkPassValue(int arr[]) {

	arr[1] = 100;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 3};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << size << endl;

	checkPassValue(arr);

	for (int i=0; i<size; i++) {
		cout << arr[i] << " ";
	}
 
    return 0;


}