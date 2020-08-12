// Rat can move up, down , right and left 
#include<iostream>
using namespace std;

int sol[10][10] = {0};

bool ratChase(char maze[][10], int sol[][10], int row, int col, int i, int j) {

    // Base Case 
    if()

}

int main() {

    int row; cin >> row;
    int col; cin >> col;
    char maze[10][10];


    for(int i=1; i<=row; i++) {
        for(int j=1; j<=col; j++) {
            cin >> maze[i][j];
        }
    }

    ratChase(maze, sol, row, col, 0, 0);

    return 0;    

}