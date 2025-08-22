class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() == 1)
            return true;
        int diffX = coordinates[1][0] - coordinates[0][0];
        int diffY = coordinates[1][1] - coordinates[0][1];

        for (int i = 0; i + 1 < coordinates.size(); i++) {
            if (diffX * (coordinates[i + 1][1] - coordinates[i][1]) !=
                diffY * (coordinates[i + 1][0] - coordinates[i][0])) {
                return false;
            }
        }
        return true;
    }
};