class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //i for unique and j for scanning
        //this is two pointer approach
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};
