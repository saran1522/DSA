class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int sum = nums[0]+nums[1], cnt =1;
        for(int i=2;i<nums.size();i+=2)
        {
            if(nums[i]+nums[i+1]==sum)
                cnt++;
            else break;
        }
        return cnt;
    }
};