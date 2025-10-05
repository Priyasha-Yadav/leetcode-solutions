class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        int ans = 0;
        nums.resize(n);
        for (int i = 0; i < n; i++) {
            nums[i] = start + 2 * i;
            ans ^= nums[i];
        }
        return ans;
    }
};