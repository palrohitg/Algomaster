/*
   Input A  and find X and y 
   * X<Y
   * GCD(X,Y) = 1
   * X+Y = A

*/

#include <iostream>
using namespace std;

int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
int main() {
	int a,b;
	cin >> a >> b;
	cout << gcd(a,b);
	return 0;
}