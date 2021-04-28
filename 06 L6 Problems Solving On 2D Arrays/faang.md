# String Print in 2d arrays
# Date : 27 April Questions 
```cpp
/*
	Approach :
	1. Make four pointers
	2. sr, er, sc, ec
	3. simulate the process
	4. last check for the break parts
*/


class Solution {
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {

		vector<int> res;
		if (matrix.size() == 0) {
			return res;
		}


		int sr = 0;
		int sc = 0;
		int er = matrix.size() - 1;
		int ec = matrix[0].size() - 1;



		while (sr <= er and sc <= ec) {

			for (int i = sc; i <= ec; i++) {
				res.push_back(matrix[sr][i]);
			}
			sr++;

			for (int i = sr; i <= er; i++) {
				res.push_back(matrix[i][ec]);
			}
			ec--;

			if (sr <= er) {
				for (int i = ec; i >= sc; i--) {
					res.push_back(matrix[er][i]);
				}

			}
			er--;

			if (sc <= ec) {.0
				for (int i = er; i >= sr; i--) {
					res.push_back(matrix[i][sc]);
				}

			}
			sc++;
		}
		return res;
	}
};
```


# Binary Search Problems 
1. Binary Search 
2. Binary Search on reverse sorted arrays 
3. Order Not know 
4. first and last occurrence of an elements 
5. count of an Element in sorted arrays 
6. number of times a sorted arrays is rotated
7. find an element in a rotated sorted arrays 
8. Searching in Nearly Sorted arrays 
9. find the floor in sorted arrays 
10. Ceil of an element in a sorted arrays 
11. Next Alphabetical Elements 
12. Find the position of an element in infinite sorted arrays 
13. Index of first 1 in a binary sroted inifited arrays 
14. Minimum Difference Elements in a sorted Arrays 
15. Binary Search on Answer concept 
16. Peak Elements 
17. Find maximum element in Bitonic Arrays 
18. Search An elements in Bitionic Arrays 
19. Search In Row Wise and column Wise Sorted Arrays 
20. Allocate Minimum Number of pages 
21. Find the Pivot Element | 153. find the minimum in Rotated sorted arrays 
