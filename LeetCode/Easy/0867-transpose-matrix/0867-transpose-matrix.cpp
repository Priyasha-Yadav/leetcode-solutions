class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int s = matrix.size();
        int t = matrix[0].size();
        vector<vector<int>> ans(t, vector<int>(s));
        ans.resize(t);
        for (int i = 0; i < s; i++) {
            for (int j = 0; j < t; j++) {
                ans[j][i] = matrix[i][j];
            }
        }
        return ans;
    }
};