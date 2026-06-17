class Solution {
public:
    bool isValid(string s) {
        stack<int>ans;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('||s[i]=='['||s[i]=='{')
            ans.push(s[i]);
            else
            {
                if(ans.empty())
                return false;
                char top=ans.top();
                ans.pop();
                if((s[i]==')' && top!='(')||(s[i]==']' && top!='[')||(s[i]=='}' && top!='{'))
                return false;
            }
        }
        return ans.empty();
    }
};
