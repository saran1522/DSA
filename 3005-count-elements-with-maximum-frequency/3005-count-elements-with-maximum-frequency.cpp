class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto &i:nums)
            mp[i]++;
        
        int maxi = -1, ans = 0;
        for(auto &it:mp)
        {
            if(it.second==maxi)
                ans+=maxi;
            
            else if(it.second>maxi){
                maxi = it.second;
                ans = maxi;
            }
                
        }
        return ans;
    }
};