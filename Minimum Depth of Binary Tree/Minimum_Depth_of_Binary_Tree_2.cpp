#include <iostream>

using namespace std;

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        if (root->left && root->right)
            return (min(minDepth(root->left), minDepth(root->right)));
        else
            return (max(minDepth(root->left), minDepth(root->right)));
    }
};
