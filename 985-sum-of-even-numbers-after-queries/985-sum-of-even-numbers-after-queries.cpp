class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int sum=0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i]%2==0)
                sum+=nums[i];
        }
        vector<int>ans;
        for(int i=0;i<queries.size();++i)
        {
            int preVal=nums[queries[i][1]];
            nums[queries[i][1]]=nums[queries[i][1]]+queries[i][0];
            if(preVal&1)
            {
             if(nums[queries[i][1]]%2==0)
                 sum+=nums[queries[i][1]];
            }
            else
            {
                if(nums[queries[i][1]]%2==0)
                 sum=sum-preVal+nums[queries[i][1]];
                else
                    sum-=preVal;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};