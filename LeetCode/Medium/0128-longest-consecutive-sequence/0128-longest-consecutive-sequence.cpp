class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0 || n == 1)
            return n;
        sort(nums.begin(), nums.end());
        int c = 1;
        int m = INT_MIN;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] + 1 == nums[i + 1])
                c++;
            else if (nums[i] == nums[i + 1]) {
                continue;
            } else {
                c = 1;
            }
            m = max(m, c);
        }
        m = max(m, c);

        return m;
    }
};

// 0, 0, 1 , 2, 3 ,4 , 5, 6 , 7, 8]