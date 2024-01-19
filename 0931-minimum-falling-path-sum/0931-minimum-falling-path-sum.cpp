class Solution {
public:
    int solve(vector<vector<int>>& matrix, int row, int prev, vector<vector<int>>& dp){
        if(row==0)
        {
            int mini=INT_MAX;
            for(int i=prev-1; i<=prev+1; ++i){
                if(i>=0 && i<matrix[row].size())
                mini = min (mini, matrix[row][i]);
            }
            dp[row][prev] = mini;
            return mini;
        }
        
        if(dp[row][prev]!=-101)
            return dp[row][prev];
        
        int mini=INT_MAX;
        for(int i=0; i<matrix[row].size(); ++i){
            if(i>=prev-1 && i<=prev+1)
            {
                int pathSum = matrix[row][i] + solve(matrix, row-1, i, dp);
                mini = min (mini, pathSum);
            }
        }
        dp[row][prev] = mini;
        return mini;   
    }
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>>dp(n,(vector<int>(n,-101)));
        int mini = INT_MAX;
        for(int i =0;i<n;++i)
        {
            mini = min(mini,solve(matrix, n-1, i, dp));
        }
        return mini;
    }
};