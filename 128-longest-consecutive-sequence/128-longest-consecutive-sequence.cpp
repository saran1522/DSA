class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        
        set<int>s;
        for(int i=0;i<nums.size();++i)
            s.insert(nums[i]);
        
        auto it=s.begin();
        int mini=*it;
        int cnt=1;
        int ans=INT_MIN;
        for(auto &v:s)
        {
            if(v==mini+1)
            {
                cnt++;
                mini=v;
            }
            else
            {
                mini=v;
                cnt=1;
            }
            ans=max(ans,cnt);
        }
        return ans;
    }
};