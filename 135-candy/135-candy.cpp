class Solution {
public:
    int candy(vector<int>& rats) {
        int n=rats.size();
        vector<int>ans(n,1);
        for(int i=1;i<n;i++)
        {
            if(rats[i]>rats[i-1])
                ans[i]=ans[i-1]+1;
        }
        for(int i=n-1;i>0;--i)
        {
            if(rats[i-1]>rats[i])
                ans[i-1]=max(ans[i]+1,ans[i-1]);
        }
        int res=accumulate(ans.begin(),ans.end(),0);
        return res;
    }
};