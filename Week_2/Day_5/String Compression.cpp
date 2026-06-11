class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>result;
        int n=chars.size();
        int i=0;
        while(i<n)
        {
            char s=chars[i];
            int count=0;
            while(i<n && chars[i]==s)
            {
                count++;
                i++;
            }
            result.push_back(s);
            if(count>1)
            {
                string str=to_string(count);
                for(int j=0;j<str.size();j++)
                {
                    result.push_back(str[j]);
                }
            }
        }
        for(int i=0;i<result.size();i++)
        {
            chars[i]=result[i];
        }
        return result.size();
    }
};
