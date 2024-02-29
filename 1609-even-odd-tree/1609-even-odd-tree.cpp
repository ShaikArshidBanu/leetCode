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
    bool isEvenOddTree(TreeNode* root) {
        vector<TreeNode*> q{root};
        int level=-1;
        while(!q.empty()){
            ++level;
            int prevVal=0;
            vector<TreeNode*> next;
            for(auto node:q){
                if(node!=nullptr){
                if(node->val%2==level%2)  return false;
                if(prevVal!=0 && ((level%2 && prevVal<=node->val)|| (!(level%2) && prevVal>=node->val))) {
                    return false;
                }
                    prevVal=node->val;
                next.push_back(node->left);
                next.push_back(node->right);
                }
                }
            swap(q,next);
        }
        return true;
    }
};