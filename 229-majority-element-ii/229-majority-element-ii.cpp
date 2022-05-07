class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        int len=n/3;
        for(auto &it:m)
        {
            if(it.second>len)
                ans.push_back(it.first);
        }
        return ans;
    }
};