#include <iostream>

using namespace std;
/*
   Given two number
*/
int greatest(int x,int y) {
    return x/y;
}


int gcd(int a, int b) 
{ 
    if(b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 


void findNumber(int no) {
   	for(int x=1; x<=no; x++) {
   		for(int y=1; y<=no; y++) {
   			if(x+y == no) { 
   				int GCD = gcd(x,y);
   				if(GCD == 1){
   					int max;
   					if(x<y) {
   					  int div = greatest(x,y);
   					   max = div;
   					  if(max <div) {
   					  	max = div;
   					  }

                      cout << x << " " << y << endl; 
   					}
   					  cout << max << 11endl;
   				}
   			}
   		}
   	} 
}

int main() {
	int A;
	cin >> A;
	findNumber(A);

	return 0;
}