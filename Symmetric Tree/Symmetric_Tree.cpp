#include <iostream>

using namespace std;

/*
 * Definition for a binary tree node.
 * struct TreeNode {
 *      int val;
 *      TreeNode* left;
 *      TreeNode* right;
 *      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };*/

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (!root) return false;

        vector<TreeNode*> levelNodes;
        levelNodes.push_back(root);
        while (1) {
             int len = levelNodes.length();
             while (len > 0) {

             }

        }
        return true;
    }
};
