class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(auto &s:strs)
        {
            string sorted_s = s;
            sort(sorted_s.begin(),sorted_s.end());
            mp[sorted_s].emplace_back(s);
        }
        
        for(auto &it:mp){
            ans.push_back(it.second);
        }
        
        return ans;
    }
};