int isIdentical(node *root1, node*root2) {
    if (root1 == NULL and root2 == NULL) {
        return 1; 
    }

    else if (root != NULL and root2 == NULL) {
        return 0; 
    }
    else if (root == NULL and root2 != NULL) {
        return 0; 
    }
    else {
        if (root1->data == root2->data and isIdentical(root1->left, root2->left)
           and isIdentical(root1->right, root2->right)) {
               return 1; 
           }
        else {
            return 0; 
        }
    }
}
 

 /*
 
    Two Tree are identical or Not.

    1. If both are null return 0.
    2. 
 
 */

def is_identical(root1, root2): 
    if (root1 == None and root == None):

TC : O(N), SC : O(N)