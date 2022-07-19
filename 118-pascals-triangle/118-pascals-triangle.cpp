class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        vector<int>row;
        for(int i=0;i<n;++i)
        {
            vector<int>row;
            for(int j=0;j<=i;++j)
            {
               if(j==0||j==i)
                 row.push_back(1);
               else
                 row.push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
            ans.push_back(row);
        }
        return ans;
    }
};