class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int s = 0;
        int n = mat.size();
        for (int i = 0; i < n; i++) {
            for (int j = n - 1; j >= 0; j--) {
                if (i == j || i + j == n - 1)
                    s += mat[i][j];
            }
        }
        return s;
    }
};

// 00 01 02
// 10 11 12
// 20 21 22