class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        return points[0][0] * (points[1][1] - points[2][1]) -
                   points[1][0] * (points[0][1] - points[2][1]) +
                   points[2][0] * (points[0][1] - points[1][1]) !=
               0;
    }
};

// x1 = points[0][0]
// x2 = points[1][0]
// x3 = points[2][0]

// y1 =  points[0][1]
// y2 =  points[1][1]
// y3 =  points[2][1]