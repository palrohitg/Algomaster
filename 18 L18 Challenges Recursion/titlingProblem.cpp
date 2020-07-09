// Find the number of ways to place the tiles
#include<iostream>
using namespace std;

int tilingProblem(int n , int m, int r, int c) {
    // Base 
	if(n == 0 || m == 0) {
		return 1; // horizontally exhausted
	}

}

int main() {

	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n;
		cin >> m;
		tilingProblem(n,m,1,m);
	}
	return 0;
}