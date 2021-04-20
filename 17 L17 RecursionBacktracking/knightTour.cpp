#include<iostream>
#include<iomanip>
using namespace std;

// To learn about the recursion take the small inputs and try to explain how the code is working in the stack memory
// let the dimension is this
const int D=8;

bool canPlace(int board[D][D], int r, int c, int n) {
	// new way to retunr
	return r>=0 && r<n &&
		   c>=0 && c<n &&
		   board[r][c] == 0;
}void print(int board[D][D], int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cout << setw(3) << board[i][j] << " ";
		}
		cout << endl;
	}
}

bool solveKnightMove(int board[D][D], int move_no,int curRow,int  curCol , int n) {
	// Base Case
	// if all the moves over 
	if(move_no == n*n) {
		print(board,n);
		cout << "****************\n";
		return true;
	}


	int rowDir[] = {2, 1, -1, -2, -2, -1,  1,  2 };
	int colDir[] = { 1, 2,  2,  1, -1, -2, -2, -1};
    // check for all the possible steps you have the eight choices
	for(int curDir=0; curDir<8; curDir++) {
		int nextRow = curRow + rowDir[curDir]; 
		int nextCol = curCol + colDir[curDir];

		// check karna hai ki place kar-sakte hai ya hi
		if(canPlace(board,nextRow,nextCol,n) == true) {
			// then bro place it here number set kar means moves
			board[nextRow][nextCol] = move_no + 1;
			// why because over problem is getting reduce means we have to set less moves
 			bool sucess = solveKnightMove(board, move_no+1, nextRow, nextCol, n);

 			// if(isSucesss == true) {
 			// 	return true;
 			// }
 			// else set the board position again 
 			board[nextRow][nextCol] = 0; // erase the line jo change hai wo replace karne hai
		}
	}
	// check karle all positions 
	return false;
}




int main(int argc, char const *argv[])
{
	int board[D][D] = {0}; // set the board to zero
	int n; 
	cin >> n;
	board[0][0]=1;
	int ans = solveKnightMove(board,1, 0, 0, n);
	if(ans == true) {
		print(board,n);
	}
	else {
		cout << "Can't Solve!";
	}
	return 0;
}