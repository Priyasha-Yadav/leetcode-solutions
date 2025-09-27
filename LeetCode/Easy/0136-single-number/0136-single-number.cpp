class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {

            m[nums[i]]++;
        };
        for (const auto& [key, val] : m) {
            if (val == 1)
                return key;
        }
        return 0;
    }
};