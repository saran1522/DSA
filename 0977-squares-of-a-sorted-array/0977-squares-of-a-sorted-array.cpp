class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        // the square of negative numbers will also be positive (-5 * -5 = 25)
        // so we can consider array as [4, 1, 0, 3, 10]
        // now it is like rotated sorted array
        // we can have 2 pointers for left(l=0) and right(r = n-1) indexes
        // reverse iterate on nums (i=n-1 to 0)
        // we will compare the nums[l] & nums[r] values in every iteration
        // if rth value is bigger(its square will also be bigger)then place nums[r]*nums[r] value at ans[i] & r--
        // if lth value is bigger(its square will also be bigger) then place nums[l]*nums[l] value at ans[i] & l++
        
        vector<int>ans(nums.size());
        int l=0, r=nums.size()-1;
        for(int i=nums.size()-1;i>=0;--i){
            if(abs(nums[r])>abs(nums[l]))
                ans[i]=nums[r]*nums[r--];
            else 
                ans[i]=nums[l]*nums[l++];
        }
        return ans;
    }
};