class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        int p = 0, q = n - 1;
        while (1) {
            if (p + 1 <= n - 1 && nums[p] < nums[p + 1])
                p++;
            else if (p + 1 <= n - 1 && nums[p] == nums[p + 1])
                return false;
            else
                break;
        }

        while (1) {
            if (q - 1 >= 0 && nums[q] > nums[q - 1])
                q--;
            else if (p + 1 <= n - 1 && nums[q] == nums[q - 1])
                return false;
            else
                break;
        }
        if (p == n - 1 || q == 0 || p == 0 || q == n - 1)
            return false;
        while (1) {
            if (nums[p] > nums[q]) {
                p++;
                q--;
            } else if (q == p || p > q)
                return true;
            else
                break;
        }
        return false;
    }
};