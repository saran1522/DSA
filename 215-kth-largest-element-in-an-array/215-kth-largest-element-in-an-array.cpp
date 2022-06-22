class Solution {
public:
    int maximum(vector<int>& nums)
    {
        int ind=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>nums[ind])
             ind=i;
        }
        return ind;
    }
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size()==1)
            return nums[0];
        int ans;
        while(k--)
        {
            auto i=nums.begin();
            int ind=maximum(nums);
            ans=nums[ind];
            while(ind--)
             ++i;
            nums.erase(i);
        }
        return ans;
    }
};