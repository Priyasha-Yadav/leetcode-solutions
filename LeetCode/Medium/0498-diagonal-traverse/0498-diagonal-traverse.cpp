class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        vector<int> result;
        result.reserve(m * n); // reserve space to avoid reallocations
        
        for (int d = 0; d < m + n - 1; d++) {
            // temporary container for the current diagonal
            vector<int> intermediate;
            
            // starting row for this diagonal
            int r = (d < n) ? 0 : d - n + 1;
            // starting col for this diagonal
            int c = (d < n) ? d : n - 1;
            
            // collect all elements in this diagonal
            while (r < m && c >= 0) {
                intermediate.push_back(mat[r][c]);
                r++;
                c--;
            }
            
            // reverse order for even diagonals
            if (d % 2 == 0) {
                reverse(intermediate.begin(), intermediate.end());
            }
            
            // append to result
            result.insert(result.end(), intermediate.begin(), intermediate.end());
        }
        
        return result;
    }
};
