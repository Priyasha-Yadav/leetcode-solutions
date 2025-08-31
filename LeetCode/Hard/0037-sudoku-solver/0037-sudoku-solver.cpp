class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }

private:
    bool solve(vector<vector<char>>& board) {
        for (int row = 0; row < 9; ++row) {
            for (int col = 0; col < 9; ++col) {
                if (board[row][col] == '.') {
                    for (char c = '1'; c <= '9'; ++c) {
                        if (isValid(board, row, col, c)) {
                            board[row][col] = c;

                            if (solve(board)) {
                                return true;
                            } else {
                                board[row][col] = '.'; // backtrack
                            }
                        }
                    }
                    return false; // no valid number found
                }
            }
        }
        return true; // all cells are filled
    }

    bool isValid(vector<vector<char>>& board, int row, int col, char c) {
        for (int i = 0; i < 9; ++i) {
            // Check row and column
            if (board[row][i] == c || board[i][col] == c)
                return false;

            // Check 3x3 box
            int boxRow = 3 * (row / 3) + i / 3;
            int boxCol = 3 * (col / 3) + i % 3;
            if (board[boxRow][boxCol] == c)
                return false;
        }
        return true;
    }
};
