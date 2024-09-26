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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        queue<pair<TreeNode*, long long>>q;
        q.push({root,0});
        int ans=-1;
        while(!q.empty()){
            int len=q.size();
            int width;
            int start_index=q.front().second;
            for(int i=0;i<len;i++){
                TreeNode* cur=q.front().first;
               long long index=q.front().second - start_index;
                width=index+1;
                q.pop();
                if(cur->left) q.push({cur->left,2*index+1});
                if(cur->right) q.push({cur->right,2*index+2});
            }
            ans=max(ans,width);
        }
        return ans;
    }
};