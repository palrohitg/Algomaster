// Calculate how much water we can stores
// 42 trapping rain waters


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

/*
1. Create leftHighestHeight arrays and rightHeighestHeight arrays
2. Compute the required water store from the above to arrays


*/

class Solution {
public:
	int trap(vector<int>& height) {
		int n = height.size();
		vector<int> leftHeight(n);
		vector<int> rightHeight(n);

		int leftHighest = 0;
		for (int i = 0; i < n; i++) {
			leftHighest = max(leftHighest, height[i]);
			leftHeight[i] = leftHighest;
		}

		int rightHighest = 0;
		for (int i = n - 1; i >= 0; i--) {
			rightHighest = max(rightHeight, height[i]);
			rightHeight[i] = rightHighest;
		}

		int totalStoredWater = 0;
		for (int i = 0; i < n; i++) {
			totalStoredWater += min(leftHeight[i], rightHighest[i]) - height[i];
		}

		return totalStoredWater;
	}
};