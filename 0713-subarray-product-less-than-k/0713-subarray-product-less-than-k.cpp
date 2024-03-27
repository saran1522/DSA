class Solution {
public:
    //take 4 variables left=0 & right=0 for window, prod for calculating current product, and res for storing number of subarrays
    // traverse on array till right less then nums size
    // in each step multiply the nums[right] to the product
    // check if prod is greater then k then remove elements from left till prod become less then k
    // at last, we can add the window size (right - left +1) in the result
    // because as we chacked, the product of elements in the window is less then k so window itself is a result so all the elements & subarrays inside the window will also be in the result as they will also have the product less then k
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(k<=1) return 0;
        
        int prod = 1, left =0, right =0, res = 0;
        while(right<nums.size()){
            prod *= nums[right];
            
            while(prod>=k)
                prod /= nums[left++];
            
            res += right - left +1;
            right++;
        }
        return res;
    }
};