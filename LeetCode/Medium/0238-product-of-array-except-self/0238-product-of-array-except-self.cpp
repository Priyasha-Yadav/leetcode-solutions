class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        int p = 1, s = 1;
        for (int i = 0; i < n; i++) {
            res[i] *= p;
            p *= nums[i];
            res[n - 1 - i] *= s;
            s *= nums[n - 1 - i];
        }
        return res;
    }
};

