class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& s) {
       vector<string>ans(s.size());
        map<int,int>mp;
        for(int i=0;i<s.size();++i)
           mp[s[i]]=i;
        int j=s.size();
        for(auto &i:mp)
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