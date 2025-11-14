class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int curr = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                curr += nums[i];
            } else
                curr = 0;
            maxOnes = max(curr, maxOnes);
        }
        return maxOnes;
    }
};