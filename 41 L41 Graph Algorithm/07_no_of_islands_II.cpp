/*
Input: n = 4, m = 5, A = [[1,1],[0,1],[3,3],[3,4]]
Output: [1,1,2,2]
Explanation:
0.  00000
    00000
    00000
    00000
1.  00000
    01000
    00000
    00000
2.  01000
    01000
    00000
    00000
3.  01000
    01000
    00000
    00010
4.  01000
    01000
    00000
    00011
*/

class Solution {
public:
    
void mark_current_as_islands(vector<vector<char>> & grid, int x, int y, int rows, int cols) {
        
        // All extreme case where we need to return 
    if (x < 0 || x >= rows || y < 0 ||  y >= cols || grid[x][y] == '0') {
        return; 
    }
        
        // marks current as water
    grid[x][y] = '0'; 
        
    mark_current_as_islands(grid, x-1, y, rows, cols); // left side 
    mark_current_as_islands(grid, x+1, y, rows, cols); // right side     
    mark_current_as_islands(grid, x, y-1, rows, cols); // down side 
    mark_current_as_islands(grid, x, y+1, rows, cols); // up side 
        
    return; 
}
    
    
int numIslands(vector<vector<char>>& grid) {
    int rows = grid.size();
    // cout << "Testing the values"; 
    if (rows == 0) return 0; 
        
    int cols = grid[0].size(); 
    int no_of_islands = 0; 
        
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // current position is 1 then marks
            // all direction that it islands 
     
            if (grid[i][j] == '1') {
              
                mark_current_as_islands(grid, i, j, rows, cols); 
                no_of_islands++; 
            }
                
        }
    }
        
     return no_of_islands;
}
};
