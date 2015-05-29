#include <iostream>

using namespace std;

class Solution {
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
    	vector<vector<int>> result;
	levelOrderTraversal(root, result, 1);
	reverse(result.begin(), result.end());
	return result;
    }

    void levelOrderTraversal(TreeNode* root, vector<vector<int>>& result, size_t level) {
    	if (!root) return ;
	if (result.size() < level)
	    result.push_back(vector<int>());
	result.at(level - 1).push_back(root->val);
	
	levelOrderTraversal(root->left, result, level + 1);
	levelOrderTraversal(root->right, result, level + 1);
    }
};
