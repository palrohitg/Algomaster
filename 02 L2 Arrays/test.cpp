#include <iostream>
using namespace std;

// Spiral print anticlokwise
void spiralPrint(int a[][10], int m, int n) {
    int k=0, l=0;
    // m--> rows, n-->columns
    while(k < m && l <n) {
        // first complete columns
        for(int i=k; i<m; i++) {
            cout << a[i][l] << ", ";
        }
        l++;
        
        // last complete row with one index
        for(int i=l; i<n; i++) {
            cout << a[m-1][i] << ", ";
        }
        m--;
        if(k<m){
            for(int i=m-1; i>=k; i--){
                cout << a[i][n-1] << ", ";
             }
             n--;
        }
        if(l<n) {
            for(int i=n-1; i>=l; i--) {
                cout << a[k][i] << ", ";
            }
            k++;
        }
    }
    cout << "END";
}

int main() {
	int m,n;
	cin >> m >> n;
	int a[10][10];
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cin >> a[i][j];
		}

	}

	spiralPrint(a,m,n);
	return 0;
}