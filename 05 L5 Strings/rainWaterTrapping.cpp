// Calculate how much water we can stores
/*
1. Approaches : O(N^2) and O(1)
	i. for each elements find the higher height from
		the left and sames as the right sides
	ii. the amount of water stores at partiucular points is nothings but the
		min(leftmostheight of the arrays, rightmostheight of the arrays) - difference of the current elements

2. Approaches : O(N) + O(N)
    i. make two arrays left and right which store the
    	height of the left most heights so far achieve and same
    	for the right most elements
    2. take the min of the heights and then takes the difference of all the elements.

3. Approaches : O(N) + O(1)
    i. Instead of the using the two arrays makes two variables
       to know the heights of the left and right most elements
    ii. sames as in the approaches 2 in both the arrays
4. Approaches :
*/

class Solution {
public:
	int trap(vector<int>& height) {
		vector<int> left;
		vector<int> right;
	}
};