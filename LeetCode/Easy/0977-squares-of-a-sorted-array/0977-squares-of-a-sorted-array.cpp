class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int l = 0, r = n - 1, c = n - 1;
        while (l <= r) {
            if (abs(nums[r]) > abs(nums[l])) {
                res[c] = nums[r] * nums[r];
                r--;
            } else {
                res[c] = nums[l] * nums[l];
                l++;
            }
            c--;
        }
        return res;
    }
};