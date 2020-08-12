// Print one path and all path and ratinmaze and sudo-solver, with chess and sumitup problems 
// How to explore all the side and where to backtracks
// best ways to dry the recursive and backtrack code is make the arrow in each functions call and return the resultant value in the call functions 
// Single and multiple path 

#include<iostream>
using namespace std;

int sol[10][10] = {0};
// Print all the matrix 
void printSol(int sol[][10], int n, int m) {

    for(int i=0; i<= m; i++) {
        for(int j=0; j<= n; j++) {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}


bool ratInMaze(char maze[][10], int sol[][10], int m, int n, int i, int j) {

    // Base case 
    if(i == m and n == j) {
        sol[i][j] = 1;
        printSol(sol, m, n);
        cout << endl;
        return true;
    }

    // Out of grid 
    if(i > m or j > n) {
        return false;
    }

    // blocked cells 
    if(maze[i][j] == 'X') {
        return false;
    }

    // Assume the solution is exits from the current cell 
    sol[i][j] = 1;

    bool right = ratInMaze(maze, sol, m, n, i, j+1);
    bool down = ratInMaze(maze, sol, m, n, j+1, i);

    sol[i][j] = 0;
    
    if(right) {
        return true;
    }
    if(down) {
        return true;
    }


    return false;
}

int main(){

    char maze[10][10] = {    
    						"oo",
    						"oo",
    					};  
    // print the maze 
    // for(int i=0; i<2; i++) {
    //     for(int j=0; j<2; j++) {
    //         cout << maze[i][j];
    //     }
    //     cout << endl;
    // }

    int m=2;
    int n=2;
    bool ans = ratInMaze(maze, sol, m-1, n-1, 0, 0);
    if(ans) {
        cout << "solved";
    }
    else {
        cout << "not solved";
    }

	return 0;
}