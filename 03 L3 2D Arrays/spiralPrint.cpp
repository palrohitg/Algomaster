#include<bits/stdc++.h> 
using namespace std;

int main() {

    int rows = 3;
    int cols = 3; 

    vector< vector<int> > matrix(rows); 

    for (int i=0; i<rows; i++) {
        matrix[i].assign(cols,0);
        for (int j=0; j<cols; j++) {
            cin >> matrix[i][j];
        }
    }  

    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            cout << matrix[i][j];
        }
    } 
    




    return 0; 
}