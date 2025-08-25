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
        vector<int> result;
        if (!root) return 0;
        inOrder(root, result);
        return result[k - 1];
    }

private:
    void inOrder(TreeNode* root, vector<int>& result) {
        if (!root) return;
        inOrder(root->left, result);
        result.push_back(root->val);
        inOrder(root->right, result);
    }
};