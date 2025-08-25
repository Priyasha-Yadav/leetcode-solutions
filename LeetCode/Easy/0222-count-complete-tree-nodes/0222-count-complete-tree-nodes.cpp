class Solution {
public:
    int countNodes(TreeNode* root) {
        if (!root) return 0;

        int sum = 1; 

        if (root->left) {
            sum += countNodes(root->left); 
        }
        if (root->right) {
            sum += countNodes(root->right); 
        }

        return sum;
    }
};
