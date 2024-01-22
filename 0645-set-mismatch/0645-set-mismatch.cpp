class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>repeat(nums.size()+1,0);
        for(int i=0;i<nums.size();++i)
        {
            repeat[nums[i]]++;
        }
        
        int twice, missing;
        for(int i=1; i<repeat.size();++i)
        {
            if(repeat[i]==0)
                missing = i;
            if(repeat[i]==2)
                twice = i;
        }
        
        return {twice, missing};
    }
};