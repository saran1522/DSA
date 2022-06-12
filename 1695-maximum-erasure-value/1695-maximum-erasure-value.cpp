class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int i=0,j=0,sum=0,ans=INT_MIN;
        unordered_map<int,int>m;
        while(j<nums.size())
        {
            m[nums[j]]++;
            if(m.size()<j-i+1)
            {
                while(m.size()<j-i+1)
                {
                    m[nums[i]]--;
                    if(m[nums[i]]==0)
                    {
                        m.erase(nums[i]);
                        sum-=nums[i];
                    }
                    i++;
                }
            }
            else
            {
                sum+=nums[j];
            }
            j++;
            ans=max(ans,sum);
        }
        return ans;
    }
};