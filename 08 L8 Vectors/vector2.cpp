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

  // Reverse function to reverse the elements
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif


  // vector<int> v {1, 2, 3};

  // reverse(v.begin(), v.end());

  // for (int i = 0; i < v.size(); ++i) {
  //   cout << v[i] << " " << endl;
  // }


  //
  /*
  PreIncrement and Post Increment logic
   - firstly print the values and then increment in the last line i++
   - PreIncrement it will increment first and then print the values i--

  */
  int i = 0;
  cout << ++i;

  cout << i << endl;




  // pair<int, string> P1;
  // pair<int, string> P2;
  // P1.first = 20;
  // P1.second = "Vikas pal";
  // cout << P1.first << endl;
  // cout << P1.second << endl;
  // P2.make_pair(1, 'Vikas Pal');
  // cout << P2.first << endl;
  // cout << P2.second << endl;
  return 0;
}