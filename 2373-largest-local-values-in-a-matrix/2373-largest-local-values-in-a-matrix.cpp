class Solution {
public:
    int findMax(vector<vector<int>>& grid, int n, int row, int col){
        int mx = -1;
        for(int i = row; i<=row+2; ++i){
            for(int j=col; j<=col+2; ++j){
                mx = max(mx, grid[i][j]);
            }
        }
        return mx;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>>ans(n-2, vector<int>(n-2));
        for(int i=0; i+2<n; ++i){
            for(int j=0; j+2<n; ++j){
                int mx = findMax(grid, n, i, j);
                ans[i][j]=mx;
            }
        }
        return ans;
    }
};