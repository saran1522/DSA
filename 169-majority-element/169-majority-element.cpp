class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int maxi=INT_MIN;
        for(auto &it:m)
        {
            maxi=max(it.second,maxi);
            cout<<it.first<<" ";
        }
        int ans;
        for(auto &it:m)
        {
          if(it.second==maxi)
              ans=it.first;
        }
        return ans;
    }
};
