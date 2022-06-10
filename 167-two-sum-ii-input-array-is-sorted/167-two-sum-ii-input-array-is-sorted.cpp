class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int i=0,j=nums.size()-1;
        vector<int>ans;
        while(i<j)
        {
            if(nums[i]+nums[j]==t)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(nums[i]+nums[j]>t)
                j--;
            else
                i++;
        }
        return ans;
    }
};