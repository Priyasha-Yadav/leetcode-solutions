class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int c = 0;
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int sum = nums[l] + nums[r];
            if (sum == k) {
                c++;
                l++;
                r--;
            } else if (sum > k)
                r--;
            else
                l++;
        }
        return c;
    }
};