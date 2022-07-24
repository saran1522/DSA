class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int t) {
        int row=0,col=matrix[0].size()-1;
        int n=matrix.size();
        while(row<n&&col>=0)
        {
            if(matrix[row][col]==t)
                return true;
            matrix[row][col]>t ? col-- : row++;
        }
        return false;
    }
};