/*
 String Class --> Object of the character arrays which is referred to as the string
 
*/
#include <iostream>
#include<string>
using namespace std;

int main() {

// Ways of initialization of strings	
  string s0;  // Given the null character/String
  string s1 = "Coding Blocks";
  string s2 = s1;
  string s3(s2);
  string s4 = s3;
  char a[] = {'C','o','d','i','n','g','\0'};
  string s5(a);

  cout << s0 << endl;
  cout << s1 << endl;
  cout << s2 << endl;
  cout << s3 << endl;
  cout << s4 << endl;
  cout << s5 << endl;
  return 0;
}