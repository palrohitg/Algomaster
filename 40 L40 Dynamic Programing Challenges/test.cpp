#include<iostream>
#include<cstring>
#include<string.h>
using namespace std;

int dp[100][100][100];


int main() {

	memset(dp, 0, sizeof(dp)); 

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 5; j++) {
			for (int z = 0; z < 5; z++) {
				cout << dp[i][j][z] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}