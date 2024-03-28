class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        int res = 0, left = 0, n = nums.size();
        for (int right = 0; right < n; ++right) {   
            count[nums[right]]++;
            while (count[nums[right]] > k)
                count[nums[left++]]--;
            res = max(res, right - left + 1);
        }
        return res;
    }
};