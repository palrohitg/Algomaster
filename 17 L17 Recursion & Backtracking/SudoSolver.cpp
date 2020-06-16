// very interesting problem sudo solver

// special case 
// 1. Can't place a number between the between the row and column if any 
// 2. Also can't place the number in sub-Grid if any 


#include<iostream>
#include<cmath>
using namespace std;
//const int N =9;

bool canPlace(int mat[][9], int i, int j, int n, int num) {
   // check in the row and the columns 
	for(int k=0; k<n; k++) {
		if((mat[i][k] == num)or (mat[k][j] == num)) { // I can't place it
			return false;
		}
	}

	// check on the subgrid
	int rn = sqrt(n);
	int sx= (i/rn) *rn;
	int sy = (j/rn)*rn;
	// check the subgrid
	for (int i = sx; i <sx+rn ; ++i)
	{
		for(int j = sy; j < sy+rn; j++) {
			if(mat[i][j] == num) {
				return false;
			}
		}
	}

	return true;
}

bool sudoSolver(int mat[][9], int i, int j, int n) {
	// Base Case 
	// if i reaches to n 
	if(i == n) {
		// Print Sudo
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cout << mat[i][j] << " ";
			}
			cout <<endl;
		}
		//cout << endl;
		return true;
	}

	// if one row is finished then shift the pos;
	if(j == n) {
		return sudoSolver(mat, i+1, 0, n);
	}

	// if non-empty cell find then just increment the values
	if(mat[i][j] != 0) {
		return sudoSolver(mat, i, j+1, n);
	}

	// try all the number 
	for(int num=1; num <=n; num++) {
		if(mat[i][j] == 0) {
		if(canPlace(mat,i,j,n,num)) {
			//cout << "Ture";
			// Assume that if the correct ones
			mat[i][j] = num;
			// check another subproblem
			bool couldSuccess = sudoSolver(mat, i, j+1 , n); // check on the next cell
			if(couldSuccess == true) {
				return true;
			} 
		}
	}
		mat[i][j] = 0;
}
	// recursion point  fails
	// all are false then return false
	return false;
}


int main() {
    int mat[9][9] = {
    				  {3, 0, 6, 5, 0, 8, 4, 0, 0},  
                      {5, 2, 0, 0, 0, 0, 0, 0, 0},  
                      {0, 8, 7, 0, 0, 0, 0, 3, 1},  
                      {0, 0, 3, 0, 1, 0, 0, 8, 0},  
                      {9, 0, 0, 8, 6, 3, 0, 0, 5},  
                      {0, 5, 0, 0, 9, 0, 6, 0, 0},  
                      {1, 3, 0, 0, 0, 0, 2, 5, 0},  
                      {0, 0, 0, 0, 0, 0, 0, 7, 4},  
                      {0, 0, 5, 2, 0, 6, 3, 0, 0}
                  	};

    if(sudoSolver(mat,0,0,9)){
    	cout << "Solved it";
    }
    else {
    	cout << "Failed";
    }  
	return 0;
}