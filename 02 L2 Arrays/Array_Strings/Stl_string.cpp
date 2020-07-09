
#include <iostream>
#include <vector>
#include<algorithm>
using namespace std ;
int main(int argc, char const *argv[])
{  
	/*
	signed CodingBlocks = 9;
	short double Naggarro =8.8;
	signed char hackerblocks='A';
	cout << CodingBlocks <<endl;
	cout << Naggarro << endl;
	cout << hackerblocks << endl;
	*/


	// Vector class in STL library
    // Three main function 1. push_back 2. pop_back 3. reverse

	vector <int> v;
	int n;
	cout << "enter the number of elements do you want to insert ";
	cin >> n;
	for(int i=0; i<n; i++) {
		int temp;
		cout << "enter the elements";
		cin >> temp;
		v.push_back(temp);
	}

	for (int i = 0; i <n; ++i)
	{
		cout << v[i] << '\n';
	}
    for (int i = 0; i < n; ++i)
    // sort accepts mainly the two paramter one is start point and the second is the ending points 
    // third arguments based the order of the sorting may be ascending and the descending 
    sort(v.begin(), v.end());
	for (int i = 0; i < n; ++i)
	{
		cout <<v[i]  << '\n';
	}
	return 0;
} 