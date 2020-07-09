// Inbuilt Sort function provided by STL Library 
/*
 STL  Provide the inbuilt sort function where you can also write your own custom Compartor

*/
#include <iostream>
#include <algorithm>
using namespace std;

// Compartor function --> means when to return true
bool cmp(int a, int b) { // how it will works
	cout << "a " << a << " " <<" b" << b <<endl;
	return a < b;          // this is condition which return true
}


int main(int argc, char const *argv[])
{   
	int a[] = {50,30,60,40,10};
	int n = sizeof(a)/ sizeof(int);
	//sort(arr, arr+n, cmp);   // By Default it will sort in increasing order 
	for(int i=0; i<n; i++) {
	   for(int j=0; j<n-1-i; j++) {
	   		if(cmp(a[j] ,a[j+1])) {
	   			swap(a[j],a[j+1]);
	   		}
	   }	
	}
	for(int i=0; i<n; i++) {
		cout << a[i] << " ";
	}	
	return 0;
}