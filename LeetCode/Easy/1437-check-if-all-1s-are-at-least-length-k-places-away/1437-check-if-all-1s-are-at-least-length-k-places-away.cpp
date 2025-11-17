class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int j = 0, sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            if (sum == 2) {
                if (i - j - 1 < k)
                    return false;
                sum = 1;
            }
            if (sum != 2 && nums[i] == 1)
                j = i;
        }
        return true;
    }
};