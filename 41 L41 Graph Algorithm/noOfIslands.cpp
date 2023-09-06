#include<bits/stdc++.h>
using namespace std;

void markCurrentIslands(vector<vector<char>> &mat, int x, int y, int rows, int col) {
    if (x < 0 || x >= rows || y < 0 || y >= col || mat[x][y] == '0') {
        return; 
    } 
    mat[x][y] = '0'; 
    markCurrentIslands(mat, x-1, y, rows, col);
    markCurrentIslands(mat, x+1, y, rows, col);
    markCurrentIslands(mat, x, y-1, rows, col);
    markCurrentIslands(mat, x, y+1, rows, col);
    return; 
}


int noOfIslands(vector<vector<char>> &ch, int row, int col) {
    // Just Iterate using two loops here 
}


int main() {    
    
    vector<vector<char>> mat; 
    int r,c; 
    cin >> r >> c; 
    for (int i=0; i < r; i++) {
        vector<char> ch; 
        for (int j=0; j < c; j++) {
            char data; cin >> data; 
            ch.push_back(data); 
        }
        mat.push_back(ch); 
    }

    return 0; 
}