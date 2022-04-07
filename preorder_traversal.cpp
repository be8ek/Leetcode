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
    
    void preorderTraversal(TreeNode* node, vector<int>& ans) {
        if (node == nullptr) {
            return; 
        }
        ans.push_back(node->val); 
        preorderTraversal(node->left, ans); 
        preorderTraversal(node->right, ans); 
    }
    
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if (root == nullptr) {
            return {}; 
        }
        vector<int> ans;
        preorderTraversal(root, ans); 
        return ans; 
    }
};