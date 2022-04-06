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
    // recursive 
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0; 
        }
        if (root->left == nullptr && root->right == nullptr) {
            return 1; 
        } 
        if (root->left == nullptr) {
            return minDepth(root->right) + 1; 
        }
        if (root->right == nullptr) {
            return minDepth(root->left) + 1; 
        }
        return min(minDepth(root->left), minDepth(root->right)) + 1; 
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
    // obxodim po sloiam
    int minDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0; 
        }
        vector<TreeNode*> curLevel; 
        vector<TreeNode*> nextLevel; 
        curLevel.push_back(root); 
        int level = 1; 
        while (true) {
            for (TreeNode* node : curLevel) {
                if (node->left == nullptr && node->right == nullptr) {
                    return level; 
                }
                if (node->left != nullptr) {
                    nextLevel.push_back(node->left); 
                }
                if (node->right != nullptr) {
                    nextLevel.push_back(node->right); 
                }
            }
            curLevel.swap(nextLevel); 
            nextLevel.clear(); 
            level++; 
        }
    }
};