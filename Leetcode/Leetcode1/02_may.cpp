class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even, odd; 
        
        for (auto num : nums) {
            if (num % 2 == 0) {
                even.push_back(num);
            } else {
                odd.push_back(num); 
            }
        }
        
        for (auto od : odd) {
            even.push_back(od); 
        }
        
        return even; 
    }
};

// Better Approach : Inplace swaps 
// j --> odd number i to even 
// iterate over i if num is even then increment j also 
// now i is pointing to event and j is pointing to odd the swap the elements 

a = 10
b = 20 

a , b = b, a 