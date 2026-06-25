class Solution {
public:
    int diameter; 

    int height(TreeNode* root) {
        if (!root) return 0;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        diameter = max(diameter, leftHeight + rightHeight);

        return 1 + max(leftHeight, rightHeight);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        diameter = 0;
        height(root);
        return diameter;
    }
};
