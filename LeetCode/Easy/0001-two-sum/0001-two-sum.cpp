class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            int compliment = target - nums[i];
            if (m.find(compliment) != m.end())
                return {m[compliment], i};
            m[nums[i]] = i;
        }
        return {};
    }
};