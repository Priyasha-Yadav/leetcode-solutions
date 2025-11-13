class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0)
            return 0;
        vector<int> left;
        left.resize(n);
        vector<int> right;
        right.resize(n);
        int l = 0, r = 0;
        for (int i = 0; i < n; i++) {
            if (l < height[i]) {
                l = height[i];
            }
            left[i] = l;
        }
        for (int i = n - 1; i >= 0; i--) {
            if (r < height[i]) {
                r = height[i];
            }
            right[i] = r;
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += min(right[i], left[i]) - height[i];
        }
        return sum;
    }
};