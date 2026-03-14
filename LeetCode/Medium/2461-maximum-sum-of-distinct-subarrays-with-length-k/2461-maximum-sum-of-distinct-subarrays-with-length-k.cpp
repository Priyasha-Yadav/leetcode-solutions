class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {

        unordered_set<int> window;
        long long curr = 0;
        long long ans = 0;

        int l = 0;

        for(int r = 0; r < nums.size(); r++) {

            while(window.count(nums[r])) {
                window.erase(nums[l]);
                curr -= nums[l];
                l++;
            }

            window.insert(nums[r]);
            curr += nums[r];

            if(r - l + 1 == k) {
                ans = max(ans, curr);

                window.erase(nums[l]);
                curr -= nums[l];
                l++;
            }
        }

        return ans;
    }
};