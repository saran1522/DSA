class Solution {
public:
    vector<int>find_pattern(string s)
    {
        if(s.size()==1)
            return {1};
        unordered_map<char,int>mp;
        vector<int>pat;
        int ind=1;
        for(int i=0;i<s.size();++i)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp.insert({s[i],ind++});
                pat.emplace_back(mp[s[i]]);
            }
            else
                pat.emplace_back(mp[s[i]]);
        }
        return pat;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
        vector<string>ans;
        vector<int>v=find_pattern(p);
        for(int i=0;i<words.size();++i)
        {
           vector<int>pt=find_pattern(words[i]);
           if(pt==v)
               ans.push_back(words[i]);
        }
        return ans;
    }
};