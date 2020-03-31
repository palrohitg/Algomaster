/*
  Given X,Y and find max(A^B) is maximum 
*/

#include<iostream>
using namespace std;

int XORProfit(int a, int b) {
	int max = 0;
	if(a == b) {
		max = 0;
	}
	else{
		for(int i=a; i<=b; i++) {
				int result = i^(i+1); 
				if(result > max) {
		  		max = result;	
				}
			// cout << i << " " << i+1 << ":" << (i^(i+1)) << endl;
			}
  		}
 return max;
}
int main() {
	int x,y;
	cin >> x >> y;
	cout <<  XORProfit(x,y);
	return 0;
}