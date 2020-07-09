//Problem : 
// maximum frequency
// aaabac 
// Return a 
#include <iostream>
#include <string>
using namespace std;

int main() {
     string str;
     cin >> str;
     int fre[1000] ={-1};

     for(int i=0; i < int( str.length()); i++) {
     	int count=1;
     	for(int j=i+1; j< int(str.length()); j++) {
     		if(str[i] == str[j]) {
     			// increase the count
     			count++;
     			// if the elements is repeated then set the frequency to zero because already count
     			fre[j]=0;	
     		}
     	}
     	if(fre[i] != 0) {
     		fre[i] = count;
     	}
     }
     cout << "frequency of each character" << endl;
     for(int i=0; i< int(str.length()); i++) {
     	if(fre[i] !=0) {
     		cout << str[i] << " " << fre[i];
     	}
     }
	return 0;
}