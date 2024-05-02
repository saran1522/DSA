class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j =nums.size()-1;
        while(i<j){
            if((nums[i]>0 && nums[j]>0) || (nums[i]<0 && nums[j]<0))
                break;
            if(nums[j]+nums[i]==0)
                return nums[j];
            else if(nums[j]+nums[i]>0)
                j--;
            else i++;
            
        }
        return -1;
    }
};