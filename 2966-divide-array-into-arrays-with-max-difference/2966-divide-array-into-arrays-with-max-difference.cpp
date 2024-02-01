class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(nums.begin(),nums.end());
        temp.push_back(nums[0]);
        temp.push_back(nums[1]);
        for(int i=2;i<nums.size();++i)
        {
            if(i%3 == 0 || (i-1)%3==0)
            {
                // cout<<i<<" "<<nums[i]<<endl; 
                temp.push_back(nums[i]); 
            }
                
            else if(nums[i]-nums[i-2]<=k)
                temp.push_back(nums[i]);
            else 
                return {};
            if(temp.size()==3){
                ans.push_back(temp);
                temp.clear();
            }
        }
        return ans;
    }
};