/*
Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
*/

class Solution {
    public:
    bool isBalanced(TreeNode* root) {
    	int rel = treeHeight(root);
	if (rel >= 0) return true;
	else return false;
    }

    int treeHeight(TreeNode* root) {
    	if (NULL == root) return 0;

	int leftHeight = treeHeight(root->left);
	int rightHeight = treeHeight(root->right);

	if (-1 == leftHeight || -1 == rightHeight || (abs(leftHeight - rightHeight) > 1)) return -1;

	return max(leftHeight, rightHeight) + 1;
    }
};
