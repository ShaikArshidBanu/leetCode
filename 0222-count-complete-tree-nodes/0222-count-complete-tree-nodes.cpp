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
    void helper(TreeNode* root, int &ans){
        if(root==nullptr) ans=0;
        if(root!=nullptr) ans++;
        if(root->left) helper(root->left,ans);
        if(root->right) helper(root->right,ans);
    }
    int countNodes(TreeNode* root) {
        int ans=0;
         if(root==nullptr) return ans;
        helper(root,ans);
        return ans;
    }
};