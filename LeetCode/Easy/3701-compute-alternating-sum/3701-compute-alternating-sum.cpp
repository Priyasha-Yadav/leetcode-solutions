class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int even = 0, odd = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i % 2 == 0)
                even += nums[i];
            else
                odd += nums[i];
        }
        return even - odd;
    }
};