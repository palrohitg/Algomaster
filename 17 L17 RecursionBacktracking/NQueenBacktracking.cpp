// Probem : Given an NxN chess board place the N queen in the safe position 
// hack : if we have to print all the configurtion then should have to return false when ever the base case hit
#include<iostream>
using namespace std; 

int count = 0; 

bool isSafe(int board[][10],int i,int j, int n) {
	// Check for the Col Condition 
	for(int row=0; row<i; row++) {
		if(board[row][j] == 1) {
			return false;
		}
	}

	// Check for the left diagonals

	int x = i;
	int y = j;

	while(x >=0 and y >= 0) {
		if(board[x][y] == 1) {
			return false;
		}
		x--;
		y--;
	}

	// check for the right Diagonals
	x = i;
	y = j;

	while(x >=0 and y < n) {
		if(board[x][y] == 1) {
			return false;
		}
		x--;
		y++;
	}

	// All there is not any condition match then surely it has the correct position
	return true;
}


bool nqueenProblem(int board[][10],int i, int n) {

	// Base Case 
	if(i == n) {
		// Print the final arrays
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				if(board[i][j] == 1) {
					cout << 'Q' << " ";
				}
				else {
					cout << '_' << " ";
				}
			}
			cout << endl;
		}
		cout << endl << endl;
		return false;
	}

	// Place the Queen using the sum Criteria

	for(int j=0; j<n; j++) {
		// Check is the pos is Safe to Place or not
		if(isSafe(board,i,j,n)) {
			board[i][j] = 1;

			// Next part par check karoo
			bool nextPartCheck = nqueenProblem(board,i+1,n);
			if(nextPartCheck) {
				return true;
			}
			// backTracking our Assumption is Wrong make the changes
			board[i][j] = 0;
		}
	}

	// when we are tried to make the queen in all place but could not place any queen
	return false;
}

int main () {
	// Chess board size 10x10

	int board[10][10] = {0};
	int n;
	cin >> n;

	// clear pos of the n queen set the value to one
	nqueenProblem(board,0,n);
	return 0;
}