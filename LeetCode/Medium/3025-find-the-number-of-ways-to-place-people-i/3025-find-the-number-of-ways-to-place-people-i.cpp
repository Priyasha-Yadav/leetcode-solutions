class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size();
        int count = 0;

        for (int i = 0; i < n; ++i) {
            auto A = points[i];
            for (int j = 0; j < n; ++j) {
                if (i == j) continue;
                auto B = points[j];

                if (A[0] <= B[0] && A[1] >= B[1]) {
                    int x1 = A[0], y1 = A[1];
                    int x2 = B[0], y2 = B[1];

                    bool hasInnerPoint = false;
                    for (int k = 0; k < n; ++k) {
                        if (k == i || k == j) continue;
                        int x = points[k][0], y = points[k][1];
                        if (x >= x1 && x <= x2 && y <= y1 && y >= y2) {
                            hasInnerPoint = true;
                            break;
                        }
                    }
                    if (!hasInnerPoint) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};
