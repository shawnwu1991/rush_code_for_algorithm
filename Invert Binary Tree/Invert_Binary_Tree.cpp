#include <iostream>

using namespace std;

/*
 * Definition for a binary tree node.
 * struct TreeNode {
 *      int val;
 *      TreeNode *left;
 *      TreeNode *right;
 *      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };*/

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root) return root;
        TreeNode*& tempRoot = root;
        invertSubTree(tempRoot);
        return tempRoot;
    }

    void invertSubTree(TreeNode *&root) {
        if ((!root->left) && (!root->right)) return ;
        TreeNode*& temp = root->right;
        root->right = root->left;
        root->left = temp;
        invertSubTree(root->left);
        invertSubTree(root->right);
    }
};
