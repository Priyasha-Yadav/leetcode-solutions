class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 4)
            return false;
        int i = 0;
        while (i + 1 < n && nums[i] < nums[i + 1])
            i++;
        if (i == 0)
            return false;

        int mid = i;
        while (i + 1 < n && nums[i] > nums[i + 1])
            i++;
        if (i == mid)
            return false;

        int start = i;
        while (i + 1 < n && nums[i] < nums[i + 1])
            i++;
if( i == start) return false;
        return i == n - 1;
    }
};