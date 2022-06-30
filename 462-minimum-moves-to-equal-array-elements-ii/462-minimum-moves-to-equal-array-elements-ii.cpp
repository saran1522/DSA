class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int mid=nums[n/2];
        int steps=0;
        //for(int i=0;i<n;i++)
            //steps+=abs(nums[i]-mid);
        
        //in above approach we are using a formula-
        //steps=(mid-nums[i]+nums[n-i-1]-mid)
        //cancelling both the mid will give -
        //steps=(nums[i]-nums[n-1-i])
        
        for(int i=0;i<n/2;i++)
            steps+=abs(nums[i]-nums[n-1-i]);
        return steps;
    }
};