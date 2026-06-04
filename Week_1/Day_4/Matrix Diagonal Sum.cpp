class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        
        //sum of primary diagonal element
        for(int i=0;i<n;i++)
        {
            sum+=mat[i][i];
        }
        
        //sum of secondary diagonal element
        for(int i=0;i<n;i++)
        {
            sum+=mat[i][n-1-i];
        }
        
        if(n%2!=0)
        {
            sum-=mat[n/2][n/2];
        }
        return sum;
    }
};
