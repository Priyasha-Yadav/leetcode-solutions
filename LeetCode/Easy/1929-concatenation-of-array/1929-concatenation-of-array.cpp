class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        result.resize(n * 2);
        for (int i = 0; i < nums.size(); i++) {
            result[i] = nums[i];
            result[i + n] = nums[i];
        }
        return result;
    }
};