class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string>words = strs;
        vector<vector<string>>ans;
        for(int i=0;i<strs.size();++i)
        {
            sort(strs[i].begin(),strs[i].end());
        }
        unordered_map<string,vector<int>>mp;
        for(int i = 0; i<strs.size(); ++i)
        {
            mp[strs[i]].push_back(i);
        }
        
        for(auto &it:mp){
            vector<string>temp;
            for( auto &i: it.second)
                temp.push_back(words[i]);
            ans.push_back(temp);
        }
        
        return ans;
    }
};