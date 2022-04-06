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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (pathSum(root, targetSum, 0)) {
            return true; 
        }
        return false; 
    }
    
    bool pathSum(TreeNode* root, int targetSum, int sum) {
        if (root == nullptr) {
            return false; 
        }
        sum += root->val; 
        if (sum == targetSum && (root->left == nullptr && root->right == nullptr)) {
            return true; 
        }
        return pathSum(root->left, targetSum, sum) || pathSum(root->right, targetSum, sum);  
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
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false; 
        }
        if (root->left == nullptr && root->right == nullptr) {
            return targetSum == root->val; 
        }
        return 
            hasPathSum(root->left, targetSum - root->val) || 
            hasPathSum(root->right, targetSum - root->val); 
    }
};