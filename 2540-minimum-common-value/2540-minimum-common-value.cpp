class Solution {
public:
    // since nums1 & nums2 both are sorted, we can use 2 pointers here
    // so i for nums1 & j for nums2 (both will start with 0)
    // run while loop till i & j equals the sizes
    // the first occurrence of nums1[i] == nums2[j] will be the smallest same element because arrays are sorted and we are traversing from left so return that
    // if ith is smaller then do i++ (so next greater may be equal to jth)
    // else do j++ (so next greater may be equal to ith)
    // if no same element found and loop ends than return -1
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int i=0, j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]) return nums1[i];
            if(nums1[i]<nums2[j]) i++;
            else j++;
            }
        return -1;
        }
};