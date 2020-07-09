#include<iostream>
using namespace std;


// Simple used the countest bit __builtin_popcount()
/*
   Hulk can make jump is power of 2 which is less than the the inserteal numeber
*/
int nStepsByHulk(int no) {
	int p=1;
	int k=0;// steps take by hulk
	while(p < no) {
		p=p*2;
		k++;

	}
	return k;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
    	int no;
    	cin >> no;
    	cout << nStepsByHulk(no) << endl;
    }
	
	return 0;
}