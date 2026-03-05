class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> window;
        int left = 0;
        for (int i = 0; i < nums.size(); i++) {

            if (window.count(nums[i]))
                return true;

            window.insert(nums[i]);

            if (window.size() > k) {
                window.erase(nums[left]);
                left++;
            }
        }

        return false;
    }
};