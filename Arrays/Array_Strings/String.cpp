// here we are going to discuss about the various concept related to character and strings

// Basically three ways to initialize the strings 
// 1. char * --> with the help of pointer 
// 2. string --> with the help of inbuilt string class
// 3. char [] --> basically the character array



#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	// char arr[] = {'a', 'b', 'c', 'd'};

	// for(int i=0; i<; i++) {
	// 	cout << arr[i] <<",";
	// }


	// string class initialization and their used

     // string str = "I love coding with codercommunity"; // first ways to intialize
     // cout << str <<endl;
     
     // string str1("hello codercommunity");
     // cout << str1.length() << endl;

     // we can also store the number of string arrays

     string arr[] = {"apple", "bannana","orange" "guava", };
     cout << sort(arr,4);
     for (int i = 0; i <5; ++i)
     {
     	cout << arr[i] << ",";
     }

	return 0;
}
