/*
 String Class --> Object of the character arrays which is referred to as the string
 Contains the character arrays internallys 

 - empty()
 - apppend() , s += "new strings"
 - s1.clear()
 - s2.length() functions 
 - compare

 
 string :: iterators it 

 // overloaded operators 
  - s1 < s2 lexgicallgraphical orders 
  - s[1] // access any characters 
  
  s = "i m new competitive coders" 
  s.find(coders) // return the index of the substrings 


  s.erase(idx, length)// start and ending index to remove the characters 

  // iterator to use the prints 
  s.begin() ad 

*/
#include <iostream>
#include<string>
using namespace std;

int main() {

// Ways of initialization of strings	
  string s0;  // Given the null character/String
  string s1 = "Coding Blocks";

  for (auto it = s1.begin(); it != s1.end(); it++) {
      cout << *(it); 
  }
  cout << endl; 

  string s2 = s1;
  string s3(s2);
  string s4 = s3;

  // initialization + declarations  char of arrays --> strings 
  // remeber always contains the null character (termination characters )
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