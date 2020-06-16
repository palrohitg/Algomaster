#include<iostream>
using namespace std;
void printSetBit(int no) {
    int set=0;
    while(no > 0) {
    	no = (no & (no-1));
    	set++;
    }
    cout << set << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
    	int no;
    	cin >> no;
    	printSetBit(no);
    }

	return 0;
}