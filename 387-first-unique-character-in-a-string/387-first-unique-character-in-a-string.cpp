class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>mp;
        int ans=INT_MAX;
        char c='A';
        for(int i=0;i<s.size();++i)
            mp[s[i]]++;
        for(auto &i:mp)
        {
            if(i.second==1)
            {
                int ind=s.find(i.first);
                if(ind<ans)
                  ans=ind;
            }
        }
        if(ans!=INT_MAX)
            return ans;
        else
            return -1;
    }
};