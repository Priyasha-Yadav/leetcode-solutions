class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int currSum = 0, maxSum = 0;
        for (int i = 0; i < k; i++) {
            currSum += nums[i];
        }
        maxSum = currSum;
        for (int i = k; i < nums.size(); i++) {
            currSum += nums[i];
            currSum -= nums[i - k];
            maxSum = max(currSum, maxSum);
        };

        return (double) maxSum/k;
    }
};