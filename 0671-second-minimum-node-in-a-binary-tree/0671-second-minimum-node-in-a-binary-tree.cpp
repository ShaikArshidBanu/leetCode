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
    void solve(TreeNode* root, vector<int> &v){
        if(!root) return;
        v.push_back(root->val);
        if(root->left) solve(root->left,v);
        if(root->right) solve(root->right,v);
    }
    int findSecondMinimumValue(TreeNode* root) {
        if(!root) return -1;
        vector<int>v;
        solve(root,v);
         sort(v.begin(),v.end());
        if(v[0]==v[v.size()-1]) return -1;
        int ans=0;
        for(int i=1;i<v.size();i++){
            if(v[i]!=v[0]){
                 ans=v[i];
                break;
            }
        }
        return ans;
    }
};