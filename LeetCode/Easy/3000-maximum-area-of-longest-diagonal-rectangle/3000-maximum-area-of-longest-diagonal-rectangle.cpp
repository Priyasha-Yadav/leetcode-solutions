
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiagonalSquared = 0;  
        int maxArea = 0;  

        if (dimensions.empty()) return 0;


        for (int i = 0; i < dimensions.size(); i++) {
            int length = dimensions[i][0];
            int width = dimensions[i][1];


            int diagonalSquared = length * length + width * width;
            int area = length * width;


            if (diagonalSquared > maxDiagonalSquared) {
                maxDiagonalSquared = diagonalSquared;
                maxArea = area;
            } else if (diagonalSquared == maxDiagonalSquared) {
                maxArea = max(maxArea, area);
            }
        }

        return maxArea;
    }
};
