class Solution {
public:
    bool findsum(TreeNode* root,int targetsum,int sum)
    {
        if(!root)
        return 0;

        sum+=root->val;

        if(!root->left && !root->right)
        return sum==targetsum;

        return findsum(root->left,targetsum,sum)||findsum(root->right,targetsum,sum);
        
    }
    bool hasPathSum(TreeNode* root, int targetsum) {
        int sum=0;
        return findsum(root,targetsum,sum);
    }
};
