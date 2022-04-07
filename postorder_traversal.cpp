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
    
    void postorderTraversal(TreeNode* node, vector<int>& ans) {
        if (node == nullptr) {
            return ;
        }
        postorderTraversal(node->left, ans); 
        postorderTraversal(node->right, ans); 
        ans.push_back(node); 
    }
    
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if (root == nullptr) {
            return {}; 
        }
        vector<int> ans; 
        postorderTraversal(root, ans); 
        return ans; 
    }
};