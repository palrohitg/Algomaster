// C++ program to print words in a sentence
#include <bits/stdc++.h>
using namespace std;

void removeDupWord(string str)
{
	string word = "";
	for (auto x : str)
	{	
		cout << x << endl;
		if (x == ' ')
		{
			cout << word << endl;
			word = "";
		}
		else {
			word = word + x;
		}
	}
	cout << word << endl; // last word to print the data here
} 

// Driver code
int main()
{
	string str = "Geeks for Geeks";
	removeDupWord(str);
	return 0;
}
