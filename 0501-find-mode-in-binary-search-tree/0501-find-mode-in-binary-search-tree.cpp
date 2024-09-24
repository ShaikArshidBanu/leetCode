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
    void calculate_mode(TreeNode* root, map<int,int>&m){
        if(!root) return;
        m[root->val]++;
        if(root->left) calculate_mode(root->left,m);
        if(root->right) calculate_mode(root->right,m);
    }
    vector<int> findMode(TreeNode* root) {
        if(!root || root->val==0) return {0};
         map<int,int>m;
         calculate_mode(root,m);
        
        int maxi=0;
        for(auto it:m){
            maxi=max(maxi,it.second);
        }
        vector<int>ans;
        for(auto it:m){
            if(it.second==maxi) ans.push_back(it.first);
        }
        return ans;
    }
};