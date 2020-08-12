// Funky chess board 
/*
    5 4
    OXOO
    OOOX
    XOXO
    XOOX
    XXOO

    NO PATH FOUND

    1 0 0 0 
    1 1 0 0 
    0 1 0 0 
    0 1 1 0 
    0 0 1 1 

    constraints left, right, down and up

*/
#include<iostream>
using namespace std;

int sol[100][100] = {0};

int main() {

    int n, m;
    cin >> n >> m;
    char arr[100][100];

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> arr[i][j];
        }
    }

    return 0;
}