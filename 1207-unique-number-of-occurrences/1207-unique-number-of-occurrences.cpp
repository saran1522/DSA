class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        unordered_set<int>st;
        for(auto i:arr)
            mp[i]++;
        for(auto m:mp)
            st.insert(m.second);
        return mp.size()==st.size();
    }
};