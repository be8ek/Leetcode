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
    // time : O(n^2)
    // space : O(n)
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == nullptr) {
            return {}; 
        }
        vector<int> ans = inorderTraversal(root->left); 
        ans.push_back(root->val); 
        vector<int> right = inorderTraversal(root->right); 
        ans.insert(ans.end(), right.begin(), right.end()); 
        return ans; 
    }
};

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
    // time : O(n) 
    // space : O(n)
    void inorderTraversal(TreeNode* node, vector<int>& ans) {
        if (node == nullptr) {
            return; 
        }
        inorderTraversal(node->left, ans); 
        ans.push_back(node->val); 
        inorderTraversal(node->right, ans); 
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == nullptr) {
            return {}; 
        }
        vector<int> ans; 
        inorderTraversal(root, ans); 
        return ans; 
    }
};