class Solution {
public:
   /* int solve(vector<int>&nums,int k,int n,vector<int>dp)
    {
        if(n==0)
            return nums[0];
        if(dp[n]!=INT_MIN)
            return dp[n];
        int maxJump=INT_MIN;
        for(int i=1;i<=k;++i)
        {
            if(n-i>=0)
            {
                int jump=solve(nums,k,n-i,dp)+nums[n];
                dp[n]=max(maxJump,jump);
                cout<<maxJump;
            }
        }
        return dp[n];
    }*/
    int maxResult(vector<int>& nums, int k) {
        if(nums.size()==1)return nums[0];
        vector<int>dp(nums.size(),INT_MIN);
        multiset<int>Q;
        dp[0] = nums[0];
        Q.insert(dp[0]);
        for(int i = 1;i<nums.size();i++){
            if(Q.size()>k){
                auto it = Q.find(dp[i-k-1]);
                Q.erase(it);
            }
            dp[i] = max(*Q.rbegin()+nums[i],dp[i]);
            Q.insert(dp[i]);
        }
        return dp[nums.size()-1];
        /*vector<int>dp(nums.size(),INT_MIN);
        return solve(nums,k,nums.size()-1,dp);*/
    }
};