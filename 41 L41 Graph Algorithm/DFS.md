## DFS Leetcode Problems 
```cpp 
// Validate Binary Search Tree
class Solution {
public:
    bool bstUtils(TreeNode *root, long minKey, long maxKey) {
        if (root == NULL) return true; 
        if (root->val <= minKey || root->val >= maxKey) {
            return false; 
        } 
        return bstUtils(root->left, minKey, root->val) && bstUtils(root->right, root->val, maxKey); 
    }
    bool isValidBST(TreeNode* root) {
        return bstUtils(root, INT_MIN, INT_MAX); 
    }
};
``` 



```cpp 
// Same Tree : Structural Identical and Nodes has the Same Values
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Base Case 
        if (p == nullptr and q == nullptr) {
            return true;
        }
        if(p == nullptr || q == nullptr) {
            return false; 
        }
    
        return (p->val == q->val) and isSameTree(p->left, q->left) and isSameTree(p->right, q->right);  
    }
};
```

```cpp 
// Find the Duplicates Elements 
int findDuplicates(vector<int> &nums) {
    
    int slow = nums[0]; 
    int fast = nums[0]; 

    while(slow != fast) {
        slow = nums[slow]; 
        fast = nums[nums[fast]]; 
    }

    fast = nums[0]; 
    
    while(slow != fast) {
        slow = nums[slow]; 
        fast = nums[fast]; 
    }
    return slow; 
}
``` 

