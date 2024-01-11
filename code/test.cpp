#include<bits/stdc++.h> 
using namespace std;

/**
 * @brief 
 * 
 * @return int 
 * 
 * ip -> 2, 1, 8 
 * curren_min = 8, 1, 
 * 
 * o to n-1 
 * max_ans = INT_MIN;  1 etch 
 * ngflarray = 0, 0, 1 
 * ngfrarray = 1, 0, 0
 * 1 
 * 
 * leftarray  :  0, 0, 1 
 * right array : 1, 0, 0 
 * ans    max( : 1 , 0 , 1)   = 1 
 * 
 * 
 * 
 * 2, 4, 8
 * 
 * stack = [, ,  ] = stack.empty
 * 
 * 
 * current_left_min = 2 
 * Test Case 2 : i/p -> 2, 4, 8, 7, 7, 9, 3  n = 7 
 * ngflarray = [0, 2, 4, 4, 4, 7, 2]
 * ngrlarray - [0, 3, 3, 3, 7, 3, 0]
 * ans = [0, 1, 1, 1 , 3, 4, 2] = 4 
 * 
 * TC : O(N)
 * SC : O(N)
 */


int maxNextSmallestElement(vector<int> v) {
	int ans = 0;
	int n = v.size(); 
	vector<int> left(v.size());
	vector<int> right(v.size()); 
	stack<int> s1; 
	stack<int> s2; 
	s1.push(v[0]); 
	left[0] = 0;  
	for(int i = 1; i < v.size(); i++) {
		int currentElement = v[i]; 
		while(!s1.empty() && s1.top() > currentElement) {
			s1.pop(); 
		} 
		if (!s1.empty()) {
			left[i] = s1.top();
			
		} 
		s1.push(currentElement);
 	}  
	left[n-1] = 0; 
	
	for(int i = n-2; i >= 0; i++) {
		int currentElement = v[i]; 
		while(!s2.empty() && s2.top() > currentElement) {
			s2.pop(); 
		} 
		if (!s2.empty()) {
			right[i] = s2.top();
		}
		s2.push(currentElement);
 	}  
	
	for (int i = 0; i < n; i++) {
		int absDiff = abs(left[i] , right[i]); 
		ans = max(ans, absDiff);
	}
	return ans; 
}

int main() { 
	vector<int> v{2, 4, 8, 7, 7, 9, 3}; 
	int ans	= maxNextSmallestElement(v);  
	cout << ans << endl; 
	return 0; 
}