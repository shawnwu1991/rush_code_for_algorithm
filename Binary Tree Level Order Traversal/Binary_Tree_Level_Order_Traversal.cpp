#include <iostream>

using namespace std;

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
	vector<vector<int>> levelOrder(TreeNode* root) {
	    vector<vector<int>> levelResult;
	    levelResult.push_back(vector<int>());
	    levelVecot(root, levelResult, 0);

	    return levelResult;
	}

	void levelVector(TreeNode* root, vector<vector<int>>& levelRes, int level) {
	    if (NULL == root) return;
	    
	    if (levelRes.size() < level) {
	    	vector<int>& tempLevel;
		tempLevel.push_back(root->val);
		levelRes.push_back(tempLevel);
	    }else {
	    	levelRes[level].push_back(root->val);
	    }

	    level++;

	    levelVector(root->left, levelRes, level);
	    levelVector(root->right, levelRes, level);
	}
};
