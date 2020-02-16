#include <iostream>
using namespace std;

// this program will calculate the ncr of the number implementing each module using the functiond

int factorial(int num) {
 	int nfact = 1;
 	for(int curvalue=1; curvalue <=num; curvalue++) {
 		nfact = nfact *curvalue;

 	}
 	return nfact ;
}
int rfactorial(int rval) {
 	int rfact = 1;
 	for(int curvalue=1; curvalue <=rval; curvalue++) {
 		rfact = rfact *curvalue;
 	}
 	return rfact ;
}

int nrfactorial(int nrval) {
	int nrfact = 1;
 	for(int curvalue=1; curvalue <=nrval; curvalue++) {
 		nrfact = nrfact *curvalue;
 	}
 	return nrfact ;

} 

int main() {
	int n,r;
	cout << "Enter a number num and the rval new the";
	cin >>n >> r;
	int nfact = factorial(n);
	int rfact = rfactorial(r);
	int nrfact = nrfactorial(n-r);
	int ans = nfact/(rfact * nrfact);
	cout << "nrfactB	cout "<<ans;
	return 0;
}