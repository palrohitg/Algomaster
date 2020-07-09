#include <iostream>
using namespace std;
int main() {
    int row=9, col=5;
    for(int i=1; i<=col; i++) {
        for(int j=1; j<=i; j++) {
            cout << "*";
        }
        cout <<endl;
    }
    int count=col;
    for(int i=count+1; i<=row; i++) {
        for(int j=col-1; j>=1; j--){
            cout << "*";
        }
        cout << endl;
        col--;
    }
    return 0;
}
