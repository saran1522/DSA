class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        multiset<int>st;
        for(auto i:nums)
            st.insert(i*i);
        
        nums.clear();
        for(auto i:st)
            nums.push_back(i);
        
        return nums;
    }
};