// Sort the vectors and make the original indexes as is before sorting the vectors
// Store the index and prints the original onces

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    // make the vectors --> nothing but the dynamics Arrays
    vector <int> v{10,4,12,1,2};
    vector<int> data;
    for(int i=0; )
    sort(v.begin(),v.end());
    for(int x : v) {
    	cout << x << " ";
    }   

    cout << endl;

	return 0;
}