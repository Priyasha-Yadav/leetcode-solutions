class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int max_area = 0;
        while (left < right) {
            max_area = max(max_area,
                           min(height[left], height[right]) * (right - left));
            if(height[left] >= height[right]) right--;
            else if(height[right] >= height[left]) left++;
        }
        return max_area;
    }
};