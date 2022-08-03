// 103. Binary Tree Zigzag Level Order Traversal
// 102. Base Problem is level order Traversal

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include<bits/stdc++.h> 
using namespace std; 

vector<int> zigzagLevelOrder(node * root) {
    if (root == NULL) return {};

    vector<int> ans;
    queue<node*> q;

    q.push(root);
    bool flag = false;

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;
        for (int i = 0; i < size; i++) {
            node * node = q.front();
            q.pop();
            level.push_back(node->data);
            if (node->left != NULL) {q.push(node->left);}
            if (node->right != NULL) {q.push(node->right);}
        }
        flag != flag;
        if (flag == false) {
            reverse(level.begin(), level.end());
        }
        for (int i = 0; i < level.size(); i++) {
            ans.push_back(level[i]);
        }

    }


class Solution {
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            vector<vector<int>> result;
            // if root is null return result = []
            if (root == NULL) {
                return result;
            }

            queue<TreeNode*> q;
            q.push(root);
            q.push(NULL); // indicates cur level ends
            vector<int> cur_level;

            while (!q.empty()) {
                TreeNode* t = q.front();
                q.pop();

                if (t == NULL) {
                    result.push_back(cur_level);
                    cur_level.resize(0);
                    if (q.size() > 0) {
                        q.push(NULL);
                    }
                }
                else {
                    cur_level.push_back(t->val);
                    if (t->left) {
                        q.push(t->left);
                    }
                    if (t->right) {
                        q.push(t->right);
                    }
                }
            }

            return result;

        }
    };



// Zig-Zag Order Traversal
    /**
     * Definition for a binary tree node.
     * struct TreeNode {
     *     int val;
     *     TreeNode *left;
     *     TreeNode *right;
     *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
     * };
     */
    class Solution {
    public:
        vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
            vector<vector<int>> result;
            queue<TreeNode*> q;
            q.push(root);
            int level = 0;

            while (!q.empty()) {

                int sz = q.size(); // create the size of the trees
                vector<int> cur(sz);

                for (int i = 0; i < sz; i++) {

                    node *t = t.front();
                    t.pop()

                    if (level == 0) {
                        cur[i] = t->data;
                    }

                    if (level == 1) {
                        cur[sz - i - 1] = t->data;
                    }

                    if (t->left) {
                        q.push(t->left);
                    }

                    if (t->right) {
                        q.push(t->right);
                    }
                }
                result.push_back(q);
                level != level;
            }
        }
    };


// function to print the level order traversal :
