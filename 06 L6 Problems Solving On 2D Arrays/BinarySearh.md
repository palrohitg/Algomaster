1. Find Minimum in Rotated And Sorted Arrays

```cpp
153.
class Solution {
public:
	int findMin(vector<int>& nums) {
		int low = 0;
		int high = nums.size() - 1;

		while (low < high) {
			int mid = (low + high) / 2;
			if (nums[mid] > nums[high]) {
				low = mid + 1;
			}
			else {
				high = mid;
			}
		}
		return nums[high];
	}
};

TC : O(logN)
SC : O(1)
```


# 2. 154. Find Minimum in Rotated Sorted Arrays || 154.

```cpp
153.
class Solution {
public:
	int findMin(vector<int>& nums) {
		int low = 0;
		int high = nums.size() - 1;

		while (low < high) {
			int mid = (low + high) / 2;
			if (nums[mid] > nums[high]) {
				low = mid + 1;
			}
			else {
				high = mid;
			}
		}
		return nums[high];
	}
};

TC : O(N) // Worst Case
SC : O(1)
```

# 3. Search in 2D Matrix || 74 :
```cpp
class Solution {
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target) {
		int row = matrix.size();
		int col = matrix[0].size();
		int i = 0;
		int j = col - 1;

		while (i < row and j >= 0) {
			if (matrix[i][j] == target) {
				return true;
			}
			else if (matrix[i][j] > target) {
				j--;
			}
			else {
				i++;
			}
		}
		return false;
	}
};
```

# Date: 29 Aprils

## 1. Alphabet Order
```cpp
class Solution {
public:
	char nextGreatestLetter(vector<char>& letters, char target) {
		if (letters.back() <= target) return letters.front();
		int low = 0, high = letters.size() - 1;
		while (low < high) {
			auto mid = (low + high) / 2;
			if (target < letters[mid]) high = mid;
			else low = mid + 1;
		}
		return letters[low];
	}
};
```


## 2. Count Negative number in 2 Matrix
```cpp
class Solution {
public:
	int countNegatives(vector<vector<int>>& grid) {
		int m = grid.size();
		int n = grid[0].size();
		int count = 0;
		int i = m - 1;
		int j = 0;

		while (i >= 0 and j < n) {

			if (grid[i][j] < 0) {
				count += (n - j);
				i--;
			}
			else {
				j++;
			}
		}

		return count;
	}
};
```