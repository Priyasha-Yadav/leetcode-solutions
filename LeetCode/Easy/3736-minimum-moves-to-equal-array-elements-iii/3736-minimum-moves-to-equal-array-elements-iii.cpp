class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max = INT_MIN;
        for (int i : nums)
            if (i > max)
                max = i;
        int c = 0;
        for (int i : nums)
            c += max - i;
        return c;
    }
};