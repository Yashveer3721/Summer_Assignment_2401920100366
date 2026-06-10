class Solution {
public:
    string decodeString(string s) {
        stack<int> counts;
        stack<string> resultStack;
        string result = "";
        int num = 0;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                num = num * 10 + (s[i] - '0');
            } else if (s[i] == '[') {
                counts.push(num);
                resultStack.push(result);
                num = 0;
                result = "";
            } else if (s[i] == ']') {
                int repeat = counts.top(); counts.pop();
                string temp = resultStack.top(); resultStack.pop();
                for (int j = 0; j < repeat; j++) {
                    temp += result;
                }
                result = temp;
            } else {
                result += s[i];
            }
        }
        return result;
    }
};
