 void inorder(vector<int>&res,TreeNode* node)
 {
    if (!node) 
    return;
    inorder(res, node->left);       
    res.push_back(node->val);       
    inorder(res, node->right);      
 }
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        inorder(ans,root);
        return ans;
    }
};
