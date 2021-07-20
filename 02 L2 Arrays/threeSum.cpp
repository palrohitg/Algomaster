// Simple and elegent solutions



vector<vector<int>> threeSum(vector<int>& nums) {

    sort(nums.begin(), nums.end());

    // two pointer: fix one pointer
    // sum > 0; r-- else l++

    vector<vector<int>> res;
    int n = nums.size();

    if (n < 3) return res;

    for (int i = 0; i < n - 2; i++) {

        int l = i + 1, r = n - 1;

        // skip duplicates for ith index
        if (i != 0  && nums[i] == nums[i - 1]) continue;

        while (l < r) {

            int target = nums[l] + nums[r] + nums[i];

            if (target == 0) {
                res.push_back( {nums[i], nums[l], nums[r]} );

                // why ? // skip duplicate pairs
                // brings the pointer to the last occurence of a repeated number in nums
                while (r - 1 >= l && nums[r - 1] == nums[r]) r--;
                while (l + 1 < r && nums[l + 1] == nums[l] ) l++;

                // since we have skipped duplicates and are on the last occurence of the duplicate we need to update the pointers
                l++;
                r--;
            }

            else if (target > 0)
                r--;    // reduce the target
            else
                l++;

        }
    }

    return res;
}