#include <iostream>

using namespace std;

/*
 * Definition for a binary tree node.
 * struct TreeNode {
 *      int val;
 *      TreeNode *left;
 *      TreeNode *right;
 *      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
*/

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        int lHeight = minDepth(root->left);
        int rHeight = minDepth(root->right);
        if (((lHeight >= rHeight) && ( rHeight)) ||
            ((lHeight <  rHeight) && (!lHeight)))
            return 1 + rHeight;
        else if (((lHeight >= rHeight) && (!rHeight)) ||
                 ((lHeight <  rHeight) && ( lHeight)))
            return 1 + lHeight;
    }
};
