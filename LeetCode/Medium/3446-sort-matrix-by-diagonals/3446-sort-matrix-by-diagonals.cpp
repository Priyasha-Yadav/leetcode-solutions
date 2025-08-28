class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        unordered_map<int, vector<int>> diagMap;

        // Step 1: Collect all elements by diagonal (key = i - j)
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                diagMap[i - j].push_back(grid[i][j]);
            }
        }

        // Step 2: Sort diagonals based on position
        for (auto& [key, vec] : diagMap) {
            if (key >= 0) {
                sort(vec.begin(), vec.end(), greater<int>()); // Bottom-left triangle
            } else {
                sort(vec.begin(), vec.end()); // Top-right triangle
            }
        }

        // Step 3: Put sorted values back into grid
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                grid[i][j] = diagMap[i - j].front();
                diagMap[i - j].erase(diagMap[i - j].begin());
            }
        }

        return grid;
    }
};
