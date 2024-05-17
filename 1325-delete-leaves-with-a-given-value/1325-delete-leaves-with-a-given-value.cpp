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
    using node2 = tuple<TreeNode*, TreeNode*, bool>; 
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        vector<node2> stack = {{root, NULL, 0}};

        while (!stack.empty()) {
            auto [node, parent, visited] = stack.back();
            stack.pop_back();

            if (!visited) {
                
                stack.emplace_back(node, parent, 1);

                if (node->right) 
                    stack.emplace_back(node->right, node, 0);
                if (node->left) 
                    stack.emplace_back(node->left, node, 0);
            } 
            else {
                if (!node->left && !node->right && node->val==target) {
                    if (parent) {
                        if (parent->left == node) 
                            parent->left = NULL;
                        else if (parent->right == node) 
                            parent->right = NULL; 
                        delete node; 
                    }
                    else 
                        root=NULL;
                }
            }
        }

        return root;
    }
};