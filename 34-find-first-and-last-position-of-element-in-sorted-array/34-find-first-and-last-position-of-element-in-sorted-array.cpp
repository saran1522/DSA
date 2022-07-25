class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int t) {
        vector<int>ans(2,-1);
        int s=0,e=nums.size()-1; 
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(nums[m]==t)
            {
                ans[0]=m;
                e=m-1;
            }
            else if(nums[m]>t)
                e-=1;
            else
                s+=1;
        }
        s=0,e=nums.size()-1;
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(nums[m]==t)
            {
                ans[1]=m;
                s=m+1;
            }
            else if(nums[m]>t)
                e-=1;
            else
                s+=1;
        }
        return ans;
    }
};