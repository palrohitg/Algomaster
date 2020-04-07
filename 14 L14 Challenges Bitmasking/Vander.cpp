#include<iostream>
using namespace std;

int power(int a, int b) {
	int res = 1;
	for (int i = 0; i < b; i++) {
		res *= a;
	}

	return res;
}

int main() {

	int arr[] = {1, 2, 3};
	int N;
	cin >> N;
	int M = sizeof(arr) / sizeof(arr[0]);

	int result[M][N]; // size is M*N
	for (int i = 0; i < M; i++) {
		int k=0;
		for (int j = N-1; j >=0; j--) {
			result[i][j] = power(arr[i], k++);
		}	
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cout << result[i][j] << " ";
		}	

		cout << endl;
	}
	cout << endl;	
	return 0;
}