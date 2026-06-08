class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if (s.size() < p.size()) 
          return result;
        vector<int> pCount(26, 0), sCount(26, 0);
        for (int i = 0; i < p.size(); i++) {
            pCount[p[i] - 'a']++;
            sCount[s[i] - 'a']++;
        }
        for (int i = 0; i <= s.size() - p.size(); i++) {
            if (pCount == sCount) 
              result.push_back(i);
            if (i + p.size() < s.size()) {
                sCount[s[i] - 'a']--;
                sCount[s[i + p.size()] - 'a']++;
            }
        }
        return result;
    }
};
