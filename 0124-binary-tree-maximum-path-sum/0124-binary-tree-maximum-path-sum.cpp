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
    int max_down_path(TreeNode* root, int &ans){
        if(root==nullptr) return 0;
        int l=max_down_path(root->left,ans);
        if(l<0) l=0;
        int r=max_down_path(root->right,ans);
        if(r<0) r=0;
        int x=root->val+l+r;
        ans=max(ans,x);
        return root->val+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        if(root==nullptr) return 0;
        int ans=INT_MIN;
        max_down_path(root,ans);
        return ans;
    }
};