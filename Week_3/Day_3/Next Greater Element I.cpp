class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>st;
        vector<int>next(nums2.size(),-1);
        //we store nge for nums2
        for(int i=0;i<nums2.size();i++)
        {
            while(!st.empty()&&nums2[i]>nums2[st.top()])
            {
                next[st.top()]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        //now push nge for mapped element in ans
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    ans.push_back(next[j]);
                    break;
                }
            }
        }
        return ans;
    }
};
