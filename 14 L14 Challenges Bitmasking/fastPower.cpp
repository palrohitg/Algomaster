#include<iostream>
using namespace std;

int fastPower(int a, int b){
	int ans=1;
	//int p=1;
	while(b>0) {
		int last_bit = (b & 1);
		if(last_bit == 1) {
			ans = ans*a;			 
		}
		//p=p*2;
		a=a*a;
		b = b >> 1;
	}
	return ans;
}
int main() {

    cout << fastPower(2,5);
	return 0;
}