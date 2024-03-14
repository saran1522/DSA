class Solution {
public:
    int countSubarrays(vector<int>&nums, int goal){
        if(goal<0)
            return 0;
        int i=0, currSum=0, ans =0;
        for(int j =0; j<nums.size();++j){
            currSum += nums[j];
            while(currSum>goal){
                currSum -= nums[i];
                i++;
            }
            ans += (j-i+1);
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return countSubarrays(nums, goal) - countSubarrays(nums, goal-1);
    }
};
