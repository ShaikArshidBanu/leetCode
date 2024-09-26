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
    int maxLevelSum(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        int total_sum=INT_MIN;
        q.push({root,1});
        int ans=0;
        while(!q.empty()){
            int len=q.size();
            int temp=0;
            int cur_level=q.front().second;
            for(int i=0;i<len;i++){
               TreeNode* cur=q.front().first;
                temp+=cur->val;
                q.pop();
                if(cur->left) q.push({cur->left,cur_level+1});
                if(cur->right) q.push({cur->right,cur_level+1});
            }
            if(total_sum<temp) {
             total_sum=temp;
             ans=cur_level;
            }
        }
       return ans;
    }
};