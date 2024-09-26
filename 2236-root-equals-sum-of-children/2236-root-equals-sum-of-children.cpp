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
    bool checkTree(TreeNode* root) {
        if(!root) return true;
        if(!root->left && !root->right) return true;
        int child_sum=0;
        if(root->left) child_sum+=root->left->val;
        if(root->right) child_sum+=root->right->val;
        if(root->val!= child_sum) return false;
        return checkTree(root->left) && checkTree(root->right);
    }
};