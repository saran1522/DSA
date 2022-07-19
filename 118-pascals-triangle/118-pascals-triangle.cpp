class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        vector<int>row;
        for(int i=0;i<n;++i)
        {
            vector<int>row(i+1);
            row[0]=row[i]=1;
            for(int j=1;j<i;++j)
                 row[j]=(ans[i-1][j-1]+ans[i-1][j]);
            ans.emplace_back(row);
        }
        return ans;
    }
};