#include <iostream>
using namespace std;

// Spiral print anticlokwise
void spiralPrint(int a[][10], int m, int n) {
    int row_start=0, col_start=0;
	int count = 0;
	int row_end = m;
	int col_end = n;

    // m--> rows, n-->columns
    while(count < row_end*col_end) {
        // first complete columns
    	if()
        for(int i=row_start; i<row_end; i++) {
            cout << a[i][col_start] << ", ";
			count++;
        }
        cout << "count" << count;
        col_start = col_start + 1;
        
        // last complete row with one index
		
        for(int i=col_start; i<col_end; i++) {
            cout << a[row_end-1][i] << ", ";
			count++;
        }
         cout << "count" << count;
		row_end = row_end - 1;
		
		for(int i=row_end-1; i>=row_start; i--){
                cout << a[i][col_end-1] << ", ";
				count++;
        }
         cout << "count" << count;
		col_end = col_end - 1;
		
        for(int i=col_end-1; i>=col_start; i--) {
            cout << a[row_start][i] << ", ";
			count++;
        }
         cout << "count" << count;
		row_start = row_start+1;  
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