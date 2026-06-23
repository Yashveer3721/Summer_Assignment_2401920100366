class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)
        return ans;
        stack<TreeNode*>s1;
        stack<TreeNode*>s2;
        s1.push(root);

        while(!s1.empty() || !s2.empty())
        {
            vector<int>res;
            while(!s1.empty())
            {
                TreeNode*temp=s1.top();
                s1.pop();
                res.push_back(temp->val);

                if(temp->left)
                s2.push(temp->left);
                if(temp->right)
                s2.push(temp->right);
            }
            if(!res.empty())
            ans.push_back(res);
            res.clear();
            while(!s2.empty())
            {
                TreeNode*temp=s2.top();
                s2.pop();
                res.push_back(temp->val);

                if(temp->right)
                s1.push(temp->right);
                if(temp->left)
                s1.push(temp->left);
            }
            if(!res.empty())
            ans.push_back(res);
        }
        return ans;
    }
};
