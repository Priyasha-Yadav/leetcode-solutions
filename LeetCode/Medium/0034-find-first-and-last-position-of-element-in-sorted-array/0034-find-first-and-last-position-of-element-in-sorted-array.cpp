class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = binarySearch(nums, target, true);
        int right = binarySearch(nums, target, false);
        return {left, right};
    }

private:
    int binarySearch(vector<int>& nums, int target, bool isLeft) {
        int low = 0, high = nums.size() - 1;
        int idx = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > target)
                high = mid - 1;
            else if (nums[mid] < target)
                low = mid + 1;
            else if (nums[mid] == target) {
                idx = mid;
                if (isLeft)
                    high = mid - 1;

                else
                    low = mid + 1;
            }
        }
        return idx;
    }
};