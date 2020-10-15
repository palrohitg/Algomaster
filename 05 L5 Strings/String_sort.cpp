/*
 String sorting based on the lexiographical order / dictionary order of the strings 

*/

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

// Custom Comparator
/*
 return a > b; if a is greater than only return the true 
*/
bool compare(string a , string b) {

	if(a.length() ==  b.length()) {
		return a < b; //return  lexiographical return
	}
	return a.length() > b.length(); 

}

int main() {
    int n;
    cin >> n;

    //arrays of string
    string s[100];
    cin.get(); //consume extra space \n
    for(int i=0; i<n; i++) {
    	getline(cin,s[i]);
    }

    //sort function of algorithm
    sort(s,s+n,compare); // default based on lexiographical based

    for(int i=0; i<n; i++) {
      cout << s[i] <<endl;
    }
	return 0;
}