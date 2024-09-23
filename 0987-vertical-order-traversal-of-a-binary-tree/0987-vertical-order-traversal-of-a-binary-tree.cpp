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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,map<int,vector<int>>>m;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto x=q.front();
            q.pop();
            TreeNode* cur=x.first;
            int row=x.second.first;
            int col=x.second.second;
            m[col][row].push_back(cur->val);
            if(cur->left) q.push({cur->left,{row+1,col-1}});
            if(cur->right) q.push({cur->right,{row+1,col+1}});
        }
        vector<vector<int>>ans;
        for(auto c:m){
            vector<int>temp1;
            for(auto r:c.second){
                vector<int>temp2=r.second;
                sort(temp2.begin(),temp2.end());
                temp1.insert(temp1.end(),temp2.begin(),temp2.end());
            }
            ans.push_back(temp1);
        }
    return ans;
    }
};