class Solution {
public:
    stack<int> s; 
    void pushElementToStack(int Count, int element) {
        while(Count--) {
            s.push(element); 
        }
        return; 
    }  
    
    int sumTopK(int k) {
        int sum = 0;
        while(k-- && !s.empty()) {
            sum = sum + s.top();
            s.pop(); 
        }
        return sum; 
    }
    
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        // Create a Stack insert the count of elements from -1, 0, 1 and then finally 
        // Pop up the items based on the k value and sums all the values. 
        pushElementToStack(numNegOnes, -1); 
        pushElementToStack(numZeros, 0);
        pushElementToStack(numOnes, 1); 
        return sumTopK(k);
    }
};