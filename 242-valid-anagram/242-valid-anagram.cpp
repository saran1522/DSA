class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        int ang[26]={0};
        for(int i=0;i<s.size();++i)
        {
           ang[s[i]-'a']++;
           ang[t[i]-'a']--;
        }
        for(auto &i:ang)
        {
            if(i)
                return false;
        }
        return true;
    }
};