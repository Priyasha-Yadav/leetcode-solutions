class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        vector<int> copy = nums;
        int first = 0, second = 0;
        sort(nums.begin(), nums.end());

        while (st < end) {
            int sum = nums[st] + nums[end];
            if (sum == target) {
                first = nums[st];
                second = nums[end];
                break;
            } else if (sum > target)
                end--;
            else
                st++;
        }

        vector<int> indices;
        for (int i = 0; i < copy.size(); i++) {
            if (copy[i] == first || copy[i] == second) {
                indices.push_back(i);
                if (indices.size() == 2)
                    break;
            }
        }

        return indices;
    }
};
