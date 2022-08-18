class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mp;
            for(int i=0;i<arr.size();++i)
               mp[arr[i]]++;
        
        multiset<int>st;
            for(auto &i:mp)
                st.insert(i.second);
        
        int cnt=0,sum=0;
        for(auto it=st.rbegin();it!=st.rend();++it)
        {
            sum+=*it;
            cnt++;
            if(sum>=arr.size()/2)
                return cnt;
        }
        return cnt;
    }
};