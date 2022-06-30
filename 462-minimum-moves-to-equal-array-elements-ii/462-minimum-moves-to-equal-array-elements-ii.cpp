class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mid=nums.size()/2;
        int steps=0;
        for(int i=0;i<mid;i++)
        {
            int diff=nums[mid]-nums[i];
            steps+=diff;
        }
        for(int i=mid+1;i<nums.size();i++)
        {
            int diff=nums[i]-nums[mid];
            steps+=diff;
        }
        return steps;
    }
};