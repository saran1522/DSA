class Solution {
public:
    std::vector<std::vector<int>> result;

    /* A utility function to check if a queen can be placed on board[row][column].
    Note that this function is called when "column" queens are already placed in columns from 0 to column - 1.
    So we need to check only left side for attacking queens. */
    bool isSafe(std::vector<std::vector<bool>> board, int row, int column, int N)
    {
        // Check the current row on the left side.
        for(int i = 0; i < column; i++)
            if(board[row][i])
                return false;

        // Check the upper diagonal on the left side.
        for(int i = row, j = column; i >= 0 && j >= 0; i--, j--)
            if(board[i][j])
                return false;

        // Check the lower diagonal on the left side.
        for(int i = row, j = column; j >= 0 && i < N; i++, j--)
            if(board[i][j])
                return false;

        return true;
    }
    
    // A recursive utility function to solve N Queen problem.
    bool nQueenHelper(std::vector<std::vector<bool>>& board, int column)
    {
        int N = board.size();
        
        // Base case: If all queens are placed then return true.
        if(column == N)
        {
            std::vector<int> v;
            for(int i = 0; i < N; i++)
                for(int j = 0; j < N; j++)
                    if(board[i][j] == 1)
                        v.push_back(j + 1);

            result.push_back(v);
            return true;
        }
        
        bool result = false;
        // Consider this column and try placing this queen in all rows one by one.
        for(int i=0;i<N;i++)
            // Check if queen can be placed on board[i][column].
            if(isSafe(board, i, column, N))
            {
                board[i][column] = true; // Place this queen in board[i][column].
                result = nQueenHelper(board, column + 1) || result; // Make result true if any placement is possible.
                board[i][column] = false; // If placing queen in board[i][column] doesn't lead to a solution, then remove queen from board[i][column] i.e. BACKTRACK.
            
            }
        
        return result; // If queen can not be place in any row in this column column then return false.
    }
    
public:
    // This function solves the N Queen problem using Backtracking.
    // It mainly uses nQueenHelper() to solve the problem.
    int totalNQueens(int n) 
    {
        result.clear();
        std::vector<std::vector<bool>> board(n, std::vector<bool>(n, false));
        if(!nQueenHelper(board, 0)) // It returns 0 if queens cannot be placed
            return 0;
        else
        {
            std::sort(result.begin(), result.end());
            int count = 0;
            for(auto itr : result)        
                //for(auto itr1 : itr)
                    count++;
            return count;
        }
    }
};