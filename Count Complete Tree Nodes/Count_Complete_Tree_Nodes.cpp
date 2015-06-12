#include <iostream>

using namespace std;

/*
 * Definition for a binary tree node.
 * struct TreeNode {
 *      int val;
 *      TreeNode* left;
 *      TreeNode* right;
 *      TreeNode(int: x) : val(x), left(NULL), right(NULL) {}
 * };*/

class Solution {
public:
    int countNodes(TreeNode* root) {
        if (NULL == root) return 0;
        int result = 1;
        if (root->left)  result += countNodes(root->left);
        if (root->right) result += countNodes(root->right);

        return result;
    }
};
