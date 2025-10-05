class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int ans = 0;
        int odd = 0, even = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(i%2 == 0) even += nums[i];
            else odd += nums[i];
        }
        ans = even - odd;
        return ans;
    }
};