class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& s) {
       vector<string>ans(s.size());
       set<pair<int,int>>st;
        for(int i=0;i<s.size();++i)
        {
            pair<int,int>p=make_pair(s[i],i);
            st.insert(p);
        }
        int n=s.size();
        int j=n;
        for(auto &i:st)
        {
            cout<<i.first<<" "<<i.second<<endl;
            if(j==1)
              ans[i.second]="Gold Medal";
            else if(j==2)
                ans[i.second]="Silver Medal";
            else if(j==3)
                ans[i.second]="Bronze Medal";
            else
            {
                ans[i.second]=to_string(j);
            }
               j--;
        }
        return ans;
    }
};