class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int area = 0;
        while (l < r) {
            int b = min(height[l], height[r]);
            int len = r - l ;
            area = max(area, b * len);

            if (height[l] > height[r])
                r--;
            else
                l++;
        }
        return area;
    }
};