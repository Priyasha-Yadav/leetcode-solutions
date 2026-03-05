class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int l = 0, r = 0;
        double max_sum = 0, sum = 0;
        for (int i = 0; i < k; i++) {
            sum += nums[i];
            r++;
        }
        max_sum = sum;
        while (r < nums.size()) {
            sum = sum + nums[r] - nums[l];
            max_sum = max(max_sum, sum);
            r++;
            l++;
        }
        return max_sum / k;
    }
};