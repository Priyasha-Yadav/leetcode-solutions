class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;
        vector<int> left;
        vector<int> right;
        int l = 0, r = 0;
        for (int i = 0; i < n; i++) {
            if (l < height[i]) {
                l = height[i];
            }
            left.push_back(l);
        }
        for (int i = n - 1; i >= 0; i--) {
            if (r < height[i]) {
                r = height[i];
            }
            right.push_back(r);
        }
        reverse(right.begin(), right.end());

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += min(right[i], left[i]) - height[i];
        }
        return sum;
    }

};