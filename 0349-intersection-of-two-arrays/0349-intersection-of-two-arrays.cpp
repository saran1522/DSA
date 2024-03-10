class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st(nums1.begin(),nums1.end());
        vector<int>ans;
        for(auto &i:nums2){
            if(st.erase(i))
                ans.emplace_back(i);
        }
        return ans;
    }
};