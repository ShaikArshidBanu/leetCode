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
    int dfs(TreeNode* node,int pathSum){
        if(!node) return 0;
        pathSum=pathSum*10+node->val;
        if(!node->right && !node->left) return pathSum;
        
        return dfs(node->left,pathSum)+dfs(node->right,pathSum);
    }
    int sumNumbers(TreeNode* root) {
        return dfs(root,0);
    }
};