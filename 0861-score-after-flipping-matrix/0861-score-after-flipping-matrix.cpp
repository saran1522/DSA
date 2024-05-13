class Solution {
public:
    void flipRows(vector<vector<int>>& grid,int row){
        for(int i=0;i<grid[row].size();++i){
            if(grid[row][i] == 0)
                grid[row][i] = 1;
            else if(grid[row][i] == 1)
                grid[row][i] = 0;
        }
    }
    
    void flipCols(vector<vector<int>>& grid,int col){
        for(int i=0;i<grid.size();++i){
            if(grid[i][col] == 0)
                grid[i][col] = 1;
            else if(grid[i][col] == 1)
                grid[i][col] = 0;
        }
    }
    
    int convertToDecimal(vector<vector<int>>& grid,int row){
        int dec = 0, inc = 0, num=1;
        for(int i=grid[row].size()-1; i>=0; --i){
            if(grid[row][i] == 1)
                dec += num;
            inc++;
            num = pow(2,inc);
        }
        return dec;
    }
    
    int matrixScore(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;++i){
            if(grid[i][0]==0){
                flipRows(grid, i);
            }
        }
        
        for(int i=0;i<m;++i){
            int one = 0, zero=0;
            for(int j=0;j<n;++j){
                if(grid[j][i] == 1)
                    one++;
                else 
                    zero++;
            }
            if(one < zero){
                flipCols(grid,i);
            }
        }
        
        int sum =0;
        for(int i=0;i<n;++i){
            sum += convertToDecimal(grid, i);
        }
        return sum;
    }
};