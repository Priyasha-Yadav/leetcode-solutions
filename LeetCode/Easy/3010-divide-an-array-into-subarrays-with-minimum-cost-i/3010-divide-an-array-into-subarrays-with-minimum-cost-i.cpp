class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int I = INT_MAX, II = INT_MAX;
        for (int i = 1; i < nums.size(); i++) {
            if (I > nums[i]) {
                II = I;
                I = nums[i];
            } else if (II > nums[i])
                II = nums[i];
        }
        return nums[0] + I + II;
    }
};