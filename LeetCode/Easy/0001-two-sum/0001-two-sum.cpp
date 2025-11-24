class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int st = 0;
        int end = nums.size() - 1;
        vector<int> copy = nums;
        vector<int> result;
        sort(nums.begin(), nums.end()); 
        
        while (st < end) {
            int sum = nums[st] + nums[end];
            if (sum == target) {
                result.push_back(nums[st]);
                result.push_back(nums[end]);
                break;
            } else if (sum > target)
                end--;
            else
                st++;
        }

        vector<int> indices;
        for (int i = 0; i < copy.size(); i++) {
            if (copy[i] == result[0] || copy[i] == result[1]) {
                indices.push_back(i);
                if (indices.size() == 2) break; 
            }
        }

        return indices;
    }
};
