class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = nums[0];
        for (int i = 0; i + 1 < nums.size(); i++) {
            nums[i] = sum;
            sum += nums[i + 1];
        }
        nums[nums.size() - 1] = sum;
        return nums;
    }
};