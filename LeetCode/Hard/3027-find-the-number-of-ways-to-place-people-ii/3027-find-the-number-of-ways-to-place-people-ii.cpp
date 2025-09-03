class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();

        set<int> x_vals, y_vals;
        for (auto& p : points) {
            x_vals.insert(p[0]);
            y_vals.insert(p[1]);
        }

        unordered_map<int, int> x_map, y_map;
        int idx = 1;
        for (int x : x_vals) x_map[x] = idx++;
        idx = 1;
        for (int y : y_vals) y_map[y] = idx++;

        int max_x = x_vals.size();
        int max_y = y_vals.size();

        vector<pair<int, int>> compressed_points(n);
        for (int i = 0; i < n; ++i) {
            int x = x_map[points[i][0]];
            int y = y_map[points[i][1]];
            compressed_points[i] = {x, y};
        }


        vector<vector<int>> grid(max_x + 2, vector<int>(max_y + 2, 0));
        for (auto& [x, y] : compressed_points) {
            grid[x][y] = 1;
        }

        vector<vector<int>> prefix(max_x + 2, vector<int>(max_y + 2, 0));
        for (int i = 1; i <= max_x; ++i) {
            for (int j = 1; j <= max_y; ++j) {
                prefix[i][j] = grid[i][j] +
                               prefix[i - 1][j] +
                               prefix[i][j - 1] -
                               prefix[i - 1][j - 1];
            }
        }


        auto getRectSum = [&](int x1, int y1, int x2, int y2) -> int {
            return prefix[x2][y2] - prefix[x1 - 1][y2]
                 - prefix[x2][y1 - 1] + prefix[x1 - 1][y1 - 1];
        };


        int result = 0;
        for (int i = 0; i < n; ++i) {
            auto [x1, y1] = compressed_points[i];
            for (int j = 0; j < n; ++j) {
                if (i == j) continue;
                auto [x2, y2] = compressed_points[j];

                if (x1 <= x2 && y1 >= y2) {
                    int x_start = x1, x_end = x2;
                    int y_start = y2, y_end = y1;
                    int count = getRectSum(x_start, y_start, x_end, y_end);
                    if (count == 2) {
                        result++;
                    }
                }
            }
        }

        return result;
    }
};
