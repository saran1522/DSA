class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i:nums)
            sum+=i;
        int realsum=0;
        int n=nums.size();
        for(int i=1;i<=n;i++)
        realsum+=i;
        int ans= realsum-sum;
        return ans;
    }
};