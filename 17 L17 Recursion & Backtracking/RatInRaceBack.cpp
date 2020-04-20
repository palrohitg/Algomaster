// Backtracking problem need when we have to go back and made the changes in that event
// Race Race interesting problem
// 1/ Count the number of path 
// if only have to findout the one bath we can call to the right part || we can go with the left part make the if condition 
	
#include <iostream> 
using namespace std;

bool ratInMaze(char maze[][10], int sol[][10], int i, int j, int m, int n) {




	// Base Case when you reach to the destination means there is a path exists
	if(i==m && j==n) {

		// Print the solution
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				cout << sol[i][j] << " " ;
			}
			cout << endl;
		}
		cout << endl;
		cout << endl;
		return true;
	}

	// if Rat is outside the matrix
	if(i>m || j>n) {
		return false;
	}

	// If blocks 
	if(maze[i][j] == 'X') {
		return false;
	}

	// set you pos
	sol[i][j] = 1;
	// here increment the right side because he is search in right direction
	int rightSide = ratInMaze(maze,sol,i,j+1,m,n);
	int downSide = ratInMaze(maze,sol,i+1,j,m,n);
	//backtrack 
	sol[i][j] =0; // set the postion again

	// Agar ek side se bhi success tho return true
	if(rightSide || downSide) {
		return true;
	}
	return false;
}


int main(int argc, char const *argv[])
{
    char maze[10][10] = {    
    						"0000",
    						"00X0",
    						"000X",
    						"0X00"

    					};
   // It will Store all the possible path 					
    int sol[10][10]={0};
    int m=4,n=4;
 // agar false hai tho kio path rat block hai
    int result = ratInMaze(maze, sol,0,0,m-1,n-1);
    if(result == false) {
    	cout << "Not path";
    }

	return 0;
}