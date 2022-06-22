class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
         return nums[nums.size()-k];
       /* if(nums.size()==1)
            return nums[0];
        int ans;
        while(k--)
        {
          int ind=0;
          for(int i=1;i<nums.size();i++)
          {
            if(nums[i]>nums[ind])
             ind=i;
          }
            ans=nums[ind];
            nums[ind]=INT_MIN;
        }
        return ans;*/
    }
};