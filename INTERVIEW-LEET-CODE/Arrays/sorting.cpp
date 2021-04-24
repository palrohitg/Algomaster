#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {

	vector<int> nums{23 , 12 , 432};
	sort(nums.begin(), nums.end());

	for (auto num : nums) {
		cout << num << " ";
	}

	return 0;
}