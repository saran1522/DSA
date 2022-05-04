class Solution {
public:
    bool search(vector<int>& nums, int t) {
        int s=0,e=nums.size()-1;
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(nums[m]==t)
                return true;
            else if(nums[s]==nums[m]&&nums[m]==nums[e])
                s++,e--;
            else if(nums[m]>=nums[s])
            {
                if(nums[s]<=t&&nums[m]>t)
                    e=m-1;
                else
                    s=m+1;
            }
            else
            {
                if(nums[e]>=t&&nums[m]<t)
                    s=m+1;
                else
                    e=m-1;
            }
        }
        return false;
    }
};