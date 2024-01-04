class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int ans = 0;
        for(int i=0;i<n;++i)
            mp[nums[i]]++;
        for(auto &it:mp)
        {
            int freq = it.second;
            if(freq==1) return -1;
            ans += freq/3;
            freq = freq%3;
            ans += freq/2;
            if(freq==1)
                ans++;
        }
        return ans;
    }
};