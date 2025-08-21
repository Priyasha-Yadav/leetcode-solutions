class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<vector<int>> height(m, vector<int>(n, 0));

        // Step 1: build height matrix
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m; i++) {
                if (mat[i][j] == 1) {
                    height[i][j] = (i > 0 ? height[i-1][j] : 0) + 1;
                }
            }
        }

        int ans = 0;

        // Step 2: count submatrices
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (height[i][j] > 0) {
                    int minHeight = height[i][j];
                    for (int k = j; k >= 0 && height[i][k] > 0; k--) {
                        minHeight = min(minHeight, height[i][k]);
                        ans += minHeight;
                    }
                }
            }
        }

        return ans;
    }
};