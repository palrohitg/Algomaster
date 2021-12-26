/*
Both push() (which internally calls push_back() on the underlying container)
and pop()(which internally calls pop_front() on the underlying container) 
provided by std::queue in
C++ STL have a constant O(1) time complexity since they only insert at the end
of queue or pop from the front of it. You can check http://www.cplusplus.com/reference/queue/queue/ to find out more about other methods and their time complexities.
*/


#include<iostream>
#include <map> 
#include<vector> 
using namespace std; 

int main() {

	// key int, value -> [vectors]
	map<int, vector<int>> m; 

	m[7].push_back(20); 
	m[7].push_back(40); 
	m[10].push_back(50); 


	for (auto p: m) {

		cout << "Key" << p.first << endl; 
		for (auto x : p.second) {
			cout << x << " "; 
		}
		cout << endl; 
	}
	return 0; 
}