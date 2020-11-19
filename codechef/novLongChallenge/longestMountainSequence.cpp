class Solution {
public:

	// find the increasing sequences and decreasing sequences


	int longestMountain(vector<int>& A) {

		int maxLength = 0;
		int i = 1;

		while (i < A.size())  {

			int inc = 0;
			int dec = 0;

			while (i < A.size() and A[i - 1] < A[i]) i++; inc;

			while (i < A.size() and A[i - 1] > A[i]) i++; dec;

			if (inc > 0 and dec > 0) maxLength = max(maxLength, inc + dec + 1);

			//same height corner case
			while (i < A.size() and A[i - 1] == A[i]) i++;

		}

		return maxLength;
	}
};