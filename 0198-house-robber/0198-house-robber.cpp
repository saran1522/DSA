class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        dp[0]=nums[0];
        if(nums.size()==1)
            return nums[0];
        for(int i=1;i<n;++i)
        {
            int house1=nums[i];
            if(i-2>=0)
              house1+=dp[i-2];
            int house2=0+dp[i-1];
            dp[i]=max(house1,house2);
        }
        return dp[n-1];
    }
};