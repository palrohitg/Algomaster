/*
  STL Contionar design --> How to make our containers (Implementation of vector Container and Pair Container)
*/

#include <iostream>
#include <algorithm>
#include <cstring>
#include<utility> // Pair utility which is store two different elemnets

using namespace std;
int main(int argc, char const *argv[])
{
   pair<int,string> P1;
    pair<int,string> P2;
   P1.first = 20;
   P1.second = "Vikas pal";
   cout << P1.first << endl;
   cout << P1.second << endl;
   P2.make_pair(1, 'Vikas Pal');
   cout << P2.first << endl;
   cout << P2.second << endl;
	return 0;
}