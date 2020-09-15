#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

    int n; cin >> n; 
    int row, col; 
    cin >> row >> col;
    int x,y;
    int mat[row + 1][col + 1];
    vector<pair<int, int>> v; 
    vector<pair<int, int>>ans;

    for(int i = 0; i < n; i++) {
        cin >> x >> y; 
        v.push_back(make_pair(x, y));
    }

    // Calcute the ^x, and ^ y
    int finised_row = 0; 
    for(int i = 0; i < v.size(); i++) {
        
    }


    return 0;
}