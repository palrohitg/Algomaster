#include <iostream>
using namespace std;

// Spiral print anticlokwise
void spiralPrint(int a[][10], int m, int n) {
    int row_start=0, col_start=0;
	int count = 0;
	int row_end = m;
	int col_end = n;
    int total_element = m*n;
    // m--> rows, n-->columns
    while(count < total_element) {
        // first complete columns
    	if(count < total_element) {
        	for(int i=row_start; i<row_end; i++) {
            	cout << a[i][col_start] << ", ";
				count++;
        	}
    	}
        col_start++;
        
        // last complete row with one index
		if(count < total_element) {
        	for(int i=col_start; i<col_end; i++) {
            	cout << a[row_end-1][i] << ", ";
				count++;
        	}
    	}
		row_end--;
		if(count < total_element) {
			for(int i=row_end-1; i>=row_start; i--){
                cout << a[i][col_end-1] << ", ";
				count++;
        	}
    	}
		col_end--;
		if(count < total_element) {
        	for(int i=col_end-1; i>=col_start; i--) {
            	cout << a[row_start][i] << ", ";
				count++;
        	}
    	}
		row_start++;  
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