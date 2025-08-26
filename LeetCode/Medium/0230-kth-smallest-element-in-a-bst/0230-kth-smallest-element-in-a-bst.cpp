/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

 class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        int result = -1;
        inOrder(root, k, result);
        return result;
    }

private:
    void inOrder(TreeNode* node, int& k, int& result) {
        if (!node) return;

        inOrder(node->left, k, result);

        k--;  
        if (k == 0) {
            result = node->val;
            return;
        }

        inOrder(node->right, k, result);
    }
};
