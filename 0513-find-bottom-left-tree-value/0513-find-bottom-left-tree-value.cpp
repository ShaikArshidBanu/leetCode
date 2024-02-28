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
    void helper(TreeNode* root,int &m,int &ans,int h){
        if(root==NULL) return;
        if(h>m){
            m=h;
            ans=root->val;
        }
        helper(root->left,m,ans,h+1);
        helper(root->right,m,ans,h+1);
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans,m=-1;
        helper(root,m,ans,0);
        return ans;
        
    }
};