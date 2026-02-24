class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int mI = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > nums[mI])
                mI = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (i != mI && nums[mI] < 2 * nums[i]) 
                return -1;
        }
        return mI;
    }
};