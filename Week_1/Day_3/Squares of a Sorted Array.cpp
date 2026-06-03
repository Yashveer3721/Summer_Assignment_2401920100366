class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int start=0,end=n-1;
        while(start<=end)
        {
            int leftsq=nums[start]*nums[start];
            int rightsq=nums[end]*nums[end];
            if(leftsq>rightsq)
            {
                ans[n-1]=leftsq;
                start++;
            }
            else
            {
                ans[n-1]=rightsq;
                end--;
            }
            n--;
        }
        return ans;
    }
};
