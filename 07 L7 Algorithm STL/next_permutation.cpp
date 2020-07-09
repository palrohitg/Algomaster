/*
  Permutation --> Arrangement of the all the elements if n elements the n! arrangement is possible
  Vectors --> Learning About Vectors which is nothing but the Dynamic Arrays
  Firstly read the Documenatation of the topic at geeks for geeks , then move to the video , then trying to
  solve as many question are possibles. 



*/


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v{1,2,3,4,5}; // basic initialization
    vector<int> a;
    // rotate(v.begin(),v.begin()+2,v.end());
     // int N = v.size()
     // v.reverse(N);
    //  // //next_permutation(v.begin(),v.end());
    //  for(auto i=v.begin(); i != v.end(); i++) {  // not follow this kind of syntax
    //     cout << *i << " ";
    // } 
     

    // for each  most commonly used iterator for vectors
    for(int x : v) {
    	cout << x << " ";
    }
    cout <<endl;
    int N;
    cin >> N;
    for(int i =0; i<N; i++) {
    	int no;
    	cin >> no;
        a.push_back(no);
    }
    cout << endl;
    for(int x : a) {
    	cout << x << " ";
    }

    /*
     push_back() basically doubly the memory after each is inserted
     size(),capacity(), max_size()
    */

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.max_size() << endl;

    cout << a.size() << endl;
    cout << a.capacity() << endl;
    cout << a
    .max_size() << endl;

	return 0;
}
