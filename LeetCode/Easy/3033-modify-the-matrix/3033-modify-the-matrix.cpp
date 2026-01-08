class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix[0].size(); i++) {
            vector<int> r;
            int max = INT_MIN;
            for (int j = 0; j < matrix.size(); j++) {
                int curr = matrix[j][i];
                if (curr > max)
                    max = curr;
                if (curr < 0)
                    r.push_back(j);
            }
            if (!r.empty()) {
                for (int row : r) {
                    matrix[row][i] = max;
                }
            };
        }
        return matrix;
    }
};