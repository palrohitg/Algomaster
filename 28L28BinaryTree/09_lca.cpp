/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 *
 *
 *
 *
 * LCA Approach :
    1. left subtree
    2. right subtree
    3. will pass from root node

    TC : O(N)
    SC : O(N)
 *
 *
 *
 */

// Find the LCA in the by iterating over the whole stuffs. 
// This is the best of the use case we can have in the our systems. 

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {

        if (root == NULL) return root;

        if (root->val == p->val || root->val == q->val) {
            return root;
        }

        TreeNode* left_lca = lowestCommonAncestor(root->left, p, q);
        TreeNode* right_lca = lowestCommonAncestor(root->right, p, q);

        if (left_lca != NULL and right_lca != NULL) return root;
        else if (left_lca == NULL and right_lca == NULL) return NULL;
        else if (left_lca != NULL) return left_lca;
        else return right_lca;
    }
};


struct Node* findLCA(struct Node* root, int n1, int n2)
{
    // Base case
    if (root == NULL)
        return NULL;
 
    // If either n1 or n2 matches with root's key, report
    // the presence by returning root (Note that if a key is
    // ancestor of other, then the ancestor key becomes LCA
    if (root->key == n1 || root->key == n2)
        return root;
 
    // Look for keys in left and right subtrees
    Node* left_lca = findLCA(root->left, n1, n2);
    Node* right_lca = findLCA(root->right, n1, n2);
 
    // If both of the above calls return Non-NULL, then one
    // key is present in once subtree and other is present
    // in other, So this node is the LCA
    if (left_lca && right_lca)
        return root;
 
    // Otherwise check if left subtree or right subtree is
    // LCA
    return (left_lca != NULL) ? left_lca : right_lca;
}

# A class to store a binary tree node
class Node:
    def __init__(self, data, left=None, right=None):
        self.data = data
        self.left = left
        self.right = right
 
 
# Function to check if a given node is present in a binary tree or not
def isNodePresent(root, node):
 
    # base case
    if root is None:
        return False
 
    # if the node is found, return true
    if root == node:
        return True
 
    # return true if a given node is found in the left or right subtree
    return isNodePresent(root.left, node) or isNodePresent(root.right, node)
 
 
# Function to find the lowest common ancestor of given nodes `x` and `y`, where
# both `x` and `y` are present in a binary tree.
# The function returns true if `x` or `y` is found in a subtree rooted at the root.
# `lca` —> stores `LCA(x, y)`
def findlca(root, lca, x, y):
 
    # base case 1: return false if the tree is empty
    if root is None:
        return False, lca
 
    # base case 2: return true if either `x` or `y` is found
    # with lca set to the current node
    if root == x or root == y:
        return True, root
 
    # recursively check if `x` or `y` exists in the left subtree
    left, lca = findlca(root.left, lca, x, y)
 
    # recursively check if `x` or `y` exists in the right subtree
    right, lca = findlca(root.right, lca, x, y)
 
    # if `x` is found in one subtree and `y` is found in the other subtree,
    # update lca to the current node
    if left and right:
        lca = root
 
    # return true if `x` or `y` is found in either left or right subtree
    return (left or right), lca
 
 
# Function to find the lowest common ancestor of nodes `x` and `y`
def findLCA(root, x, y):
 
    # `lca` stores the lowest common ancestor
    lca = None
 
    # call LCA procedure only if both `x` and `y` are present in the tree
    if isNodePresent(root, y) and isNodePresent(root, x):
        lca = findlca(root, lca, x, y)[1]
 
    # if LCA exists, print it
    if lca:
        print('LCA is', lca.data)
    else:
        print('LCA does not exist')
 
 
if __name__ == '__main__':
 
    ''' Construct the following tree
          1
        /   \
       /     \
      2       3
       \     / \
        4   5   6
           / \
          7   8
    '''
 
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.right = Node(4)
    root.right.left = Node(5)
    root.right.right = Node(6)
    root.right.left.left = Node(7)
    root.right.left.right = Node(8)
 
    findLCA(root, root.right.left.left, root.right.right)
    findLCA(root, root.right.left.left, Node(10))
    findLCA(root, root.right.left.left, root.right.left.left)
    findLCA(root, root.right.left.left, root.right.left)
    findLCA(root, root.left, root.right.left)
 }