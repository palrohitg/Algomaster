/*
 Part 1 :  String tokenizer strtok(), Accept the string a break down that particular string based on the token
 accept null value when it will print the one token.
 Part 2 : Design and Implementation of String tokenizator function on your own
*/



#include <iostream>
#include<cstring>
using namespace std;
int main() {

	char s[100] = "Corono is latest news in market";

	char *ptr = strtok(s, " "); // strtok(string, "delimeter")
    cout << ptr << endl;
    
    while(ptr != NULL) {
       ptr = strtok(NULL, " "); // token is space it may be anything
       cout << ptr <<endl;
    }
 return 0;
}