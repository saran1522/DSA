class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();++i)
            mp[s[i]]++;
        
        string ans = "";
        int sInd = 0;
        for(int i =0; i<order.size();++i){
            if(mp.find(order[i]) != mp.end()){
                while(mp[order[i]]--)
                    ans += order[i];
            }
        }
       
        for(auto &it:mp){
            if(ans.find(it.first)==string::npos)
                while(it.second--)
                    ans += it.first;
        }
        
        return ans;
    }
};