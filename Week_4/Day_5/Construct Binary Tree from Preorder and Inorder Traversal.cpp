class Solution {
public:
    int find(vector<int>& inorder,int start,int end,int val)
    {
        for(int i=start;i<=end;i++)
        {
            if(inorder[i]==val)
            return i;
        }
        return -1;
    }
    TreeNode* build(vector<int>& inorder,vector<int>& preorder,int start,int end,int&pos)
    {
        if(start>end || pos>preorder.size())
        return NULL;
        
        TreeNode* temp=new TreeNode(preorder[pos]);
        int val=preorder[pos];
        int index=find(inorder,start,end,val);
        pos++;
        
        temp->left=build(inorder,preorder,start,index-1,pos);
        temp->right=build(inorder,preorder,index+1,end,pos);

        return temp;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int pos=0;
        return build(inorder,preorder,0,preorder.size()-1,pos);
    }
};
