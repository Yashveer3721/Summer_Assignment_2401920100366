class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root)
        return NULL;
         
        if(root->val==val)
        return root;

        TreeNode* leftnode=searchBST(root->left,val);
        if(leftnode)
        return leftnode;

        return searchBST(root->right,val);
    }
};
