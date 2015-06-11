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
        TreeNode* tempRoot = root;
        int level = 0;
        while (true) {
            if (tempRoot->left) {
                tempRoot = tempRoot->right;
                if (tempRoot) {
                    level += 1;
                    continue;
                }
            return ;
            }
        }
    }
};
