class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int l = 0;
        int max_length = 0;
        int n = nums.size();
        for (int r = 0; r < n; r++) {
            if (nums[r] == 1) {
                max_length = max(max_length, r - l + 1);
            } else {
                if (r < n - 1)
                    l = r + 1;
            }
        }
        return max_length;
    }
};